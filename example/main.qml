import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.0
import example 1.0

Window {
    visible: true
    minimumHeight: 400
    minimumWidth: 600
    maximumHeight: 400
    maximumWidth: 600

    title: "Example"

    Column{
        anchors.centerIn: parent
        spacing: 5

        Example{
            id: example
        }
        TextArea{
            id: _textBox
            height: 100
            width: 380
            text: "Button clicked : " + example.count + "times"
        }

        Button{
            text: "Click here"
            height: 100
            width: 100
            onClicked: {
                example.incremnet();
            }
        }
    }
}
