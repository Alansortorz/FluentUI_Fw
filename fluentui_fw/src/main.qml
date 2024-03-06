import QtQuick
import QtQuick.Window
import QtQuick.Controls
import QtQuick.Layouts
import FluentUI

Window{
    id: app
    flags: Qt.SplashScreen
    visible: false

    Component.onCompleted: {
        FluApp.init(app) //初始化FluApp
        FluTheme.darkMode = FluThemeType.Light
        FluTheme.enableAnimation = true
        FluTheme.nativeText = true
        FluApp.routes = {
            "/main":"qrc:/fluentui_fw/src/ui/window/MainWindow.qml"
        }
        FluApp.initialRoute = "/main"
        FluApp.run()
    }

}
