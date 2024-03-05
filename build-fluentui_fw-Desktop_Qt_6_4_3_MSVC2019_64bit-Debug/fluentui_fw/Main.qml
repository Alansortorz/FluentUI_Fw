import QtQuick
import QtQuick.Window
import FluentUI


FluWindow {
    width: 1080
    height: 680
    visible: true
    title: qsTr("MIL Report Viewer | 报表查看软件")

    Connections{
        target: FluTheme
        function onDarkModeChanged(){
            SettingsHelper.saveDarkMode(FluTheme.darkMode)
        }
    }

    FluSlider{
        value:50
    }
}

