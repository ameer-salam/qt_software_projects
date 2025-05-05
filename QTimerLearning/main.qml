//Window {
////    visible: true
////    width: 640
////    height: 480
////    title: qsTr("Hello World")

////    MouseArea {
////        anchors.fill: parent
////        onClicked: {
////            console.log(qsTr('Clicked on background. Text: "' + textEdit.text + '"'))
////        }
////    }

////    TextEdit {
////        id: textEdit
////        text: qsTr("Enter some text...")
////        verticalAlignment: Text.AlignVCenter
////        anchors.top: parent.top
////        anchors.horizontalCenter: parent.horizontalCenter
////        anchors.topMargin: 20
////        Rectangle {
////            anchors.fill: parent
////            anchors.margins: -10
////            color: "transparent"
////            border.width: 1
////        }
////    }
//    visible: true
//    visibility: "Maximized"
//    minimumHeight: 300
//    minimumWidth: 600
//    title: "QTimer example"

//    Column{
//        spacing: 10
//        anchors.centerIn: parent
//        Rectangle{
//            id: _stylingRectangle
//            objectName: "_stylingRectangle"
//            Text {
//                id: _stylingRectangleText
//                objectName: "_stylingRectangleText"
//                text: "0"
//                anchors.centerIn: parent
//                font.pixelSize: 46
//                font.bold: true
//            }
//            height: 100
//            width: 200
//            color: "red"
//            radius: 10
//            border.color: "black"
//            border.width: 1.5
//        }
//        Button{
//            id: _startStopButton
//            height: 100
//            width: 200
//            Text {
//                id: _buttonText
//                text: "Start"
//                font.pixelSize: 26
//                anchors.centerIn: parent
//            }
//        }
//    }
//}


import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.0

Window{
    id: _mainWindow
    visible: true
    visibility: "Maximized"
    title: "Trying the engine, rootObjects and findChild"

    Column{
        id: _columnArrangement
        spacing: 10
        anchors.centerIn: parent

        Rectangle{
            id: _Rectangle
            height: 100
            width: 200
            color: "red"
            border.color: "black"
            border.width: 3
            radius: 10
            Text {
                anchors.centerIn: parent
                id: _RectangleText
                objectName: "_RectangleText"
                text: "0"
                font.pixelSize: 46
                font.bold: true
            }
        }

        Button{
            id: _startStopButton
            objectName: "_startStopButton"
            height: 100
            width: 200
            Text {
                id: _buttonText
                anchors.centerIn: parent
                text: "Start"
                font.pixelSize: 32
            }
        }
    }
}
