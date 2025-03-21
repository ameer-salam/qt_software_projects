import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.0
import example 1.0


Window {
    visible: true
    width: 640
    height: 480
    title: "Example"

    Example{
        id: example
    }

    Column{
        spacing: 5
        anchors.centerIn: parent

        TextArea{
            id: _textArea
            height: 100
            text: example.count;
            width: 620
            font.pixelSize: 32
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter

        }
        Button{
            text: "Click here!"
            height: 100
            width: 620
            onClicked: {
                example.increment();
            }
        }
    }
}
