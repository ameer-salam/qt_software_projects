import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.0


ApplicationWindow {
    visible: true
    width: 400
    height: 650
    title: "Ameer's QML based Calci"

//    MainForm {
//        anchors.fill: parent
//        mouseArea.onClicked: {
//            console.log(qsTr('Clicked on background. Text: "' + textEdit.text + '"'))
//        }
//    }
//    Column{
//        id: column
//        width: 500
//        height: 400
//        anchors.centerIn: parent


    //text box
    Rectangle{
        width: 400
        height: 200

        x:0
        y:0
            TextField{
                id:textBox
                anchors.fill: parent
                placeholderText: "Enter Number"
            }
    }

        //clear button
        Button{
            id:_Clear
            text:"Clear"

            //position
            x:0
            y:150

            //width and heigh
            width: 200
            height: 100
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    calculator.clear();
                }
            }
        }

        //operations buttons
        //add
        Button{
            id:_add
            text:"+"

            height:100
            width: 100

            x: 300
            y: 350

            MouseArea{
                anchors.fill: parent
                onClicked: {
                    calculator.buttonPressed("+");
                }
            }
        }

        //subtract
        Button{
            id:_sub
            text:"-"

            width: 100
            height: 100

            x: 300
            y: 250
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    calculator.buttonPressed("-");
                }
            }
        }

        //divide
        Button{
            id:_div
            text:"/"

            //position
            x:200
            y:150

            //width and heigh
            width: 100
            height: 100

            //op
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    calculator.buttonPressed("/");
                }
            }
        }

        //multiply
        Button{
            id:_mul
            text: "X"

            //height and width
            width:100
            height: 100

            //Position
            x: 300
            y: 150
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    calculator.buttonPressed("*");
                }
            }
        }

        //equals
        Button{
            id:_equals
            text:"="

            height: 200
            width: 100

            x:300
            y:450
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    calculator.buttonPressed("=");
                }
            }
        }



        //Numbers
        //zero
        Button{
            id:_0
            text:"0"

            height: 100
            width: 100

            x: 0
            y: 550
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    calculator.buttonPressed("0");
                }
            }
        }

        //one
        Button{
            id:_1
            text:"1"

            width: 100
            height: 100

            x:0
            y:450
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    calculator.buttonPressed("1");
                }
            }
        }

        //two
        Button{
            id:_2
            text:"2"

            width: 100
            height: 100

            x: 100
            y: 450
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    calculator.buttonPressed("2");
                }
            }
        }

        //three
        Button{
            id:_3
            text:"3"

            height: 100
            width: 100

            x:200
            y:450
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    calculator.buttonPressed("3");
                }
            }
        }

        //four
        Button{
            id:_4
            text:"4"

            height: 100
            width: 100

            x:0
            y:350
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    calculator.buttonPressed("4");
                }
            }
        }

        //five
        Button{
            id:_5
            text:"5"

            height: 100
            width: 100

            x:100
            y:350
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    calculator.buttonPressed("5");
                }
            }
        }

        //six
        Button{
            id:_6
            text:"6"

            height: 100
            width: 100

            x: 200
            y:350
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    calculator.buttonPressed("6");
                }
            }
        }

        //seven
        Button{
            id:_7
            text:"7"

            width:100
            height: 100

            x:0
            y:250
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    calculator.buttonPressed("7");
                }
            }
        }

        //eight
        Button{
            id:_8
            text:"8"

            width: 100
            height: 100

            x: 100
            y:250
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    calculator.buttonPressed("8");
                }
            }
        }

        //nine
        Button{
            id:_9
            text:"9"

            width: 100
            height: 100

            x: 200
            y:250
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    calculator.buttonPressed('9');
                }
            }
        }


        //symbols
        //dot
        Button{
            id:_dot
            text:"."

            height: 100
            width: 100

            x:100
            y:550
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    calculator.buttonPressed(".");
                }
            }
        }

        //plus minus
        Button{
            id:_plusMin
            text:"+/-"

            height: 100
            width: 100

            x:200
            y: 550
            MouseArea{
                anchors.fill: parent
                onClicked: {
                    calculator.buttonPressed("S");
                }
            }
        }
    //}
}
