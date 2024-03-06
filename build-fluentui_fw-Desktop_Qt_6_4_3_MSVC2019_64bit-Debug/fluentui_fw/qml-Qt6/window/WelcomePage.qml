import QtQuick
import FluentUI
import QtQuick.Window
import QtQuick.Controls 2.2
FluWindow {
    id:window
    appBar: undefined
    minimumWidth: 800
    maximumWidth: 800
    minimumHeight: 500
    maximumHeight: 500
    launchMode: FluWindowType.SingleTask
    Component.onCompleted:{
        console.debug("测试");
        setX(Screen.width / 2 - width / 2);
        setY(Screen.height / 2 - height / 2);
        timer.start()
    }

    Timer{
        id:timer
       interval: 1500
       repeat: true
       onTriggered: {
            if(progessBar.value <4){
                 progessBar.value += 1
                switch(progessBar.value)
                {
                case 1:
                    tb_message.text="连接数据库"
                    break
                case 2:
                    tb_message.text="连接PLC"
                    break
                case 3:
                    tb_message.text="连接振镜控制卡"
                    break
                case 4:
                    tb_message.text="加载系统参数"
                    break
                }

            }else{
                stop()
                window.close()
                // FluApp.navigate("/main")
                  FluApp.initialRoute = "/main"
                 FluApp.run("/main")
            }
       }
    }

    FluProgressBar{
        id:progessBar
        from: 0
        to:5
        value: 0
        height: 5
        indeterminate: false
        anchors{
            left:parent.left
            right:parent.right
            bottom: parent.bottom

        }
    }

    Image{
        id:img_2D
        smooth: true   // 平滑处理边缘
        source: "/Image/welcom.png"
        anchors{
           left:parent.left
           right:parent.right
           top:parent.top
           bottom: progessBar.top
        }
    }

    FluText{
        id:tb_message
        text: "系统初始化"
        width: 100
        height:25
        font.pixelSize: 15
        anchors{
            horizontalCenter: parent.horizontalCenter
            bottom: img_2D.bottom
        }
    }
}
