import QtQuick 2.15
import FluentUI
import QtQuick
import QtQuick.Window
import QtQuick.Controls
import QtQuick.Layouts
import Qt.labs.platform

FluWindow{
    id:window
    title: "MIL报表查看软件"
    width: 960
    height: 600
    minimumWidth: 520
    minimumHeight: 200
    launchMode: FluWindowType.SingleTask // 设置窗口的启动模式为 SingleTask
    fitsAppBarWindows: true // 是否适配 AppBar 窗口
    appBar: FluAppBar {
        height: 30 // AppBar 的高度
        darkText: Lang.dark_mode // 是否使用深色文本
        showDark: true // 是否显示深色图标
        darkClickListener:(button)=>handleDarkChanged(button) // 深色模式切换按钮的点击事件处理函数
        closeClickListener: ()=>{dialog_close.open()} // 关闭按钮的点击事件处理函数，打开退出确认对话框
        z:7 // AppBar 的 Z 轴位置
    }

    // 定义一个名为 event_checkupdate 的 FluEvent 对象，用于触发检查更新事件
    FluEvent{
        id:event_checkupdate // 事件的唯一标识符
        name: "checkUpdate" // 事件的名称为 "checkUpdate"
        // 当事件被触发时执行的操作：调用 checkUpdate 函数，传入参数 false
        onTriggered: {
            checkUpdate(false)
        }
    }

    // 定义一个名为 system_tray 的 SystemTrayIcon 对象，用于系统托盘图标管理
    SystemTrayIcon {
        id:system_tray // 系统托盘图标的唯一标识符为 system_tray
        visible: true // 设置系统托盘图标的可见性为 true
        icon.source: "qrc:/fluentui_fw/src/ui/res/image/favicon.ico" // 设置系统托盘图标的图标来源
        tooltip: "MIL Report Viewer" // 设置系统托盘图标的鼠标提示信息
        // 设置系统托盘图标的右键菜单
        menu: Menu {
            MenuItem {
                text: "退出"
                // 当菜单项被触发时执行的操作：退出应用程序
                onTriggered: {
                    FluApp.exit()
                }
            }
        }
        // 当系统托盘图标被激活时的处理函数
        onActivated:
            (reason)=>{
                // 如果激活原因是 Trigger，即鼠标点击
                if(reason === SystemTrayIcon.Trigger){
                    // 显示窗口、置顶窗口、激活窗口
                    window.show()
                    window.raise()
                    window.requestActivate()
                }
            }
    }

    // 定义一个名为 timer_window_hide_delay 的 Timer 对象，用于延迟隐藏窗口
    Timer{
        id:timer_window_hide_delay // 定时器的唯一标识符为 timer_window_hide_delay
        interval: 150 // 设置定时器的触发间隔为 150 毫秒
        // 当定时器触发时执行的操作：隐藏窗口
        onTriggered: {
            window.hide()
        }
    }

    // 定义一个名为 dialog_close 的 FluContentDialog 对象，用于退出确认对话框
    FluContentDialog {
        id: dialog_close  // 对话框的唯一标识符为 dialog_close
        // 对话框的标题、消息内容和按钮文本
        title: "退出"
        message: "确定要退出程序吗？"
        negativeText: "最小化"
        positiveText: "退出"
        neutralText: "取消"
        // 指定对话框按钮类型
        buttonFlags: FluContentDialogType.NegativeButton | FluContentDialogType.NeutralButton | FluContentDialogType.PositiveButton
        // 点击取消按钮时的操作：显示消息、重启定时器
        onNegativeClicked: {
            system_tray.showMessage("友情提示", "MIL报表查看软件已隐藏至托盘,点击托盘可再次激活窗口");
            timer_window_hide_delay.restart()
        }
        // 点击确认按钮时的操作：退出应用程序
        onPositiveClicked: {
            FluApp.exit(0)
        }
    }
    // 定义一个名为 nav_item_right_menu 的 Component 对象，用于右键菜单项
    Component {
        id: nav_item_right_menu  // 组件的唯一标识符为 nav_item_right_menu
        // 定义一个 FluMenu 子组件
        FluMenu {
            id: menu  // FluMenu 的唯一标识符为 menu
            width: 130  // 设置 FluMenu 的宽度为 130
            // FluMenu 的菜单项
            FluMenuItem {
                text: "在独立窗口打开" // 菜单项的显示文本为 "在独立窗口打开"
                visible: true // 菜单项的可见性为 true
                // 当菜单项被点击时执行的操作：导航到指定页面
                onClicked: {
                    FluApp.navigate("/pageWindow", { title: modelData.title, url: modelData.url })
                }
            }
        }
    }

    // 定义一个名为 flipable 的 Flipable 对象，用于实现翻转效果
    Flipable {
        id: flipable  // Flipable 的唯一标识符为 flipable
        // 将 Flipable 填充到父元素中
        anchors.fill: parent
        // 属性：是否已翻转，默认为 false
        property bool flipped: false  // 是否已翻转，默认为 false
        // 属性：翻转角度，默认为 0
        property real flipAngle: 0  // 翻转角度，默认为 0
        // 使用 Rotation 变换实现翻转效果
        transform: Rotation {
            id: rotation  // Rotation 的唯一标识符为 rotation
            // 旋转中心为 Flipable 的中心点
            origin.x: flipable.width / 2
            origin.y: flipable.height / 2
            // 绕 Y 轴旋转，角度为 flipable.flipAngle
            axis { x: 0; y: 1; z: 0 }
            angle: flipable.flipAngle
        }
        // 定义状态：当 flipped 为 true 时，翻转角度为 180 度
        states: State {
            PropertyChanges { target: flipable; flipAngle: 180 }
            when: flipable.flipped
        }
        // 定义过渡效果：翻转角度从当前值到目标值，持续时间为 1000 毫秒，采用 OutCubic 缓动函数
        transitions: Transition {
            NumberAnimation { target: flipable; property: "flipAngle"; duration: 1000; easing.type: Easing.OutCubic }
        }
        // 定义背面内容
        back: Item {
            // 将内容填充到 Flipable 中
            anchors.fill: flipable
            // 内容可见性取决于翻转角度是否为 0
            visible: flipable.flipAngle !== 0  // 内容可见性取决于翻转角度是否为 0
            // 内容：包含两个按钮和一个远程加载器
            Row {
                id: layout_back_buttons  // 按钮布局的唯一标识符为 layout_back_buttons
                z: 8

                // 左侧按钮：返回按钮
                FluIconButton {
                    iconSource: FluentIcons.ChromeBack
                    width: 30
                    height: 30
                    iconSize: 13
                    // 点击返回按钮时，将 flipped 设置为 false，即回到正面
                    onClicked: { flipable.flipped = false }
                }
                // 右侧按钮：重新加载按钮
                FluIconButton {
                    iconSource: FluentIcons.Sync
                    width: 30
                    height: 30
                    iconSize: 13
                    // 点击重新加载按钮时，重新加载页面
                    onClicked: { loader.reload() }
                }
            }
            // 远程加载器：用于加载指定页面
            FluRemoteLoader {
                id: loader  // 远程加载器的唯一标识符为 loader
                lazy: true
                anchors.fill: parent
                source: "https://zhu-zichu.gitee.io/Qt_168_LieflatPage.qml"  // 加载的页面地址
            }
        }
        // 定义正面内容
        front: Item {
            id: page_front  // 正面内容的唯一标识符为 page_front
            // 内容可见性取决于翻转角度是否为 180
            visible: flipable.flipAngle !== 180  // 内容可见性取决于翻转角度是否为 180
            // 将内容填充到 Flipable 中
            anchors.fill: flipable
            // 正面内容：包含 FluNavigationView
            FluNavigationView {
                property int clickCount: 0
                id: nav_view  // FluNavigationView 的唯一标识符为 nav_view
                width: parent.width
                height: parent.height
                z: 999
                pageMode: FluNavigationViewType.NoStack  // 页面模式为 NoStack
                items: ItemsOriginal
                footerItems: ItemsFooter
                topPadding: {
                    if (window.useSystemAppBar) { return 0 }
                    return FluTools.isMacos() ? 20 : 0
                }
                displayMode: viewmodel_settings.displayMode
                logo: "qrc:/fluentui_fw/src/ui/res/image/favicon.ico"  // Logo 图标
                title: "MIL Report Viewer"  // 标题
                // Logo 图标点击事件处理函数
                onLogoClicked: {
                    clickCount += 1
                    showSuccess("点击%1次".arg(clickCount))
                    // 点击次数达到 5 次时，重新加载页面并翻转到背面
                    if (clickCount === 5) {
                        loader.reload()
                        flipable.flipped = true
                        clickCount = 0
                    }
                }
                // 自动建议框组件
                //autoSuggestBox: FluAutoSuggestBox {
                    //iconSource: FluentIcons.Search
                    //items: ItemsOriginal.getSearchData()
                    //placeholderText: Lang.search
                    // 项点击事件处理函数
                    //onItemClicked: (data) => { ItemsOriginal.startPageByItem(data) }
                //}

                // 当组件完成加载时，设置页面导航和菜单
                Component.onCompleted: {
                    ItemsOriginal.navigationView = nav_view
                    ItemsOriginal.paneItemMenu = nav_item_right_menu
                    ItemsFooter.navigationView = nav_view
                    ItemsFooter.paneItemMenu = nav_item_right_menu
                    setCurrentIndex(0)
                }
            }
        }
    }
}



