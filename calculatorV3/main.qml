import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.0
import calculator 1.0

Window {
    visible: true
    minimumHeight: 640
    maximumHeight: 640
    minimumWidth: 420
    maximumWidth: 420
    title: "CalculatorV3 - with String and QProperty"
    color: "grey"

    Calculator{
        id: calculator
        onDisplayTextChanged: _textArea.text = calculator.displayText;
    }


    Column{
        id: _column
        spacing: 5
        anchors.centerIn: parent

        TextArea{
            id: _textArea
            height: 100
            width: 415
            readOnly: true
            text: "0"
            //text: calculator.displayText
            horizontalAlignment: Text.AlignRight
            verticalAlignment: Text.AlignVCenter
            font.pixelSize: 48
        }

        Grid{
            rows: 4
            columns: 4
            spacing: 5

            Repeater{
                model: [    "7",    "8",    "9",    "C",
                            "4",    "5",    "6",    "+",
                            "1",    "2",    "3",    "-",
                            "0",    "/",    "*",    "="]
                Button{
                    text: modelData;
                    height: 100
                    width: 100
                    onClicked: {
                        if(text==="=")
                            calculator.equalsPressed();
                        else if(text==="C")
                            calculator.clearPressed();
                        else
                            calculator.buttonClicked(text);
                    }

                }
            }

        }

    }

}
