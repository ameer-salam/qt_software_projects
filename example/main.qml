import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.0

import example 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Button{
        text: "Text here"
        height: 100
        width: 100
        onClicked: {

        }
    }
}
