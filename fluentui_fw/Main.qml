import QtQuick
import QtQuick.Window
import FluentUI


FluWindow {
    width: 840
    height: 480
    visible: true
    title: qsTr("MIL Report Viewer")
    x:20
    y:50

    Column{
        anchors.centerIn: parent
        spacing: 10
        FluTextBox{
            placeholderText: "请输入账号"
        }
        FluTextBox{
            placeholderText: "请输入密码"
        }
        FluFilledButton{
            text: "登录"
            anchors.right: parent.Center
            onClicked: {
                //showSuccess("登录成功")
                showError("登录失败")
            }
        }
    }
}

