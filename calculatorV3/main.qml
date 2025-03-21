import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.0
import calculator 1.0

Window {
    visible: true
    title: "Calculator V3"
    color: "grey"

    //ratio
    minimumHeight: 640
    maximumHeight: 640
    minimumWidth: 480
    maximumWidth: 480

    Calculator{
        id: calculator
        //displayTextChanged:{
       //}
        onDisplayTextChanged: _textBox.text = calculator.displayText;
    }

    Column{
        spacing: 5
        anchors.centerIn: parent

        TextArea{
            id: _textBox
            width: 415
            height: 80
            text: calculator.displayText
            font.pixelSize: 38
            readOnly: true
            horizontalAlignment: Text.AlignRight
            verticalAlignment: Text.AlignVCenter
        }

        Grid{
            spacing: 5
            columns: 4
            rows: 4

            Repeater{
                model:[ "7",    "8",    "9",    "C",
                        "4",    "5",    "6",    "/",
                        "1",    "2",    "3",    "+",
                        "0",    "*",    "-",    "="]

                Button{
                    text: modelData
                    height: 90
                    width: 100
                    onClicked: {
                        if(text === "=")
                        {
                            calculator.equalsPressed();
                        }
                        else if(text === "C")
                            calculator.clearPressed();
                        else
                            calculator.buttonPressed(text);
//                        if(text === "+" || text === "/" || text === "-" || text === "-" || text === "*")
//                            //console.log("operation clicked");
//                            calculator.example(text);
//                        else if(text === "C")
//                            console.log("clear clicked");
//                        else if(text === "=")
//                            console.log("Equals clicked");
//                        else
//                            console.log("number clicked");
                    }
                }
            }
        }
    }
}
