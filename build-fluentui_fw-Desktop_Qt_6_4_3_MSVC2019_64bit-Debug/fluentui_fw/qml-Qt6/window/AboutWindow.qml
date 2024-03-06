import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import FluentUI

FluWindow {

    id:window
    title:"关于"
    width: 600
    height: 580
    fixSize: true
    launchMode: FluWindowType.SingleTask

    ColumnLayout{
        anchors{
            top: parent.top
            left: parent.left
            right: parent.right
        }

        RowLayout{
            Layout.topMargin: 20
            Layout.leftMargin: 15
            spacing: 14
            FluText{
                text:"MIL Report Viewer"
                font: FluTextStyle.Title
                MouseArea{
                    anchors.fill: parent
                    onClicked: {
                        FluApp.navigate("/")
                    }
                }
            }
            FluText{
                text:"v%1".arg(AppInfo.version)
                font: FluTextStyle.Body
                Layout.alignment: Qt.AlignBottom
            }
        }

        RowLayout{
            spacing: 14
            Layout.topMargin: 20
            Layout.leftMargin: 15
            FluText{
                text:"团队:"
            }
            FluText{
                text:"国家数字化设计与制造创新中心增材制造创新团队"
                Layout.alignment: Qt.AlignBottom
            }
        }

        RowLayout{
            spacing: 14
            Layout.leftMargin: 15
            FluText{
                text:"官方网站："
            }
            FluTextButton{
                id:text_hublink
                topPadding:0
                bottomPadding:0
                text:"http://www.niiddm.com/"
                Layout.alignment: Qt.AlignBottom
                onClicked: {
                    Qt.openUrlExternally(text_hublink.text)
                }
            }
        }

        RowLayout{
            spacing: 14
            Layout.leftMargin: 15
            Layout.topMargin: 20
            FluText{
                id:text_desc
                text:"国家数字化设计与制造创新中心增材制造创新团队版权所有@2024-"
            }
        }
    }
}
