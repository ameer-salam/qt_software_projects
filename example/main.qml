import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.0
import example 1.0

Window {
    visible: true

    minimumHeight: 400
    maximumHeight: 400
    minimumWidth: 600
    maximumWidth: 600

    title: "Example"

    Example{
        id: _example
    }

    Column{
        anchors.centerIn: parent
        spacing: 10

        TextArea{
            id: _textBox
            width: 500
            height: 100
            text : "Hello! the button is clicked : " + _example.count + " Times"
        }

        Button{
            text: "Click here"
            height: 100
            width: 100
            onClicked: {
               //_example.exampleFun();
                _example.increment;
            }
        }
    }
}
