import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.0
import example 1.0

Window {
    visible: true

    minimumHeight: 600
    maximumHeight: 600
    minimumWidth: 400
    maximumWidth: 400

    title: "Example function"

    ExampleButton{
        id: example;
    }

    Button{
        text: "Press here"
        anchors.centerIn: parent
        width: 100
        height: 100
        onClicked: {
            example.exmaple1;
        }
    }
}
