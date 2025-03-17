import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.0

Window{
  visible: true
  minimumHeight : 400
  maximumHeight: 400
  minimumWidth: 600
  maximumWidth: 600

  title: "to close the window, click the button!"

  Button{
      text: "click to close"
      width: 150
      height: 75
//      var _x = 0
//      var _y = 0
      onClicked:{
          x =  Math.round((Math.random() * (400 - 0 +1)) + 0)
          y =  Math.round((Math.random() * (600 - 0 +1)) + 0) - 150
      }

  }
}
