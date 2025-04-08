//standards in var creation
/*
  camle case - var
  cap letter - class
  mem var - m_ prefix
  const - all caps
  */

import QtQuick 2.5
import QtQuick.Window 2.2

import QtPositioning 5.3
import QtLocation 5.6
import QtQuick.Controls 1.0

import mapDroneMove 1.0

Window {

    property var centerPoint: mapDroneMove.homeLocationCoordinate
    property var  homeLoc: mapDroneMove.homeLocationCoordinate
    property var isHomeSet: mapDroneMove.homeSet
    property var  droneCoordinate: mapDroneMove.droneLocation

    id: _mainWindow
    visible: true
    visibility: Window.Maximized
    minimumHeight: 400
    minimumWidth: 600
    title: "Map project V2"

    MapDroneMove{
        id: mapDroneMove

        onDroneLocationChanged: {
            var newCoord = QtPositioning.coordinate(mapDroneMove.droneLocation.latitude, mapDroneMove.droneLocation.longitude);

            if(_dronePath.path.length === 0)
                _dronePath.path = [newCoord];
            else
                _dronePath.path = _dronePath.path.concat([newCoord]);
        }
    }

    Plugin{
        id: mapPlugin
        name: "osm"

        PluginParameter {
            name: "osm.mapping.providersrepository.disabled"
            value: "true"
        }
        PluginParameter {
            name: "osm.mapping.providersrepository.address"
            value: "http://maps-redirect.qt.io/osm/5.6/"
        }
    }

//    Slider{
//        id: _distanceSlider
//        visible: false
//        parent: _mainMapArea
//        maximumValue: 200
//        minimumValue: 20
//        stepSize: 10
//        height : 150
//        anchors.bottom: parent.bottom
//        anchors.bottomMargin: 50
//        anchors.left: parent.left
//        anchors.leftMargin: 570
//        orientation: Qt.Vertical
//    }

    SpinBox{
        parent: _mainMapArea
        id: _distanceSpinBox
        visible: false
        maximumValue: 200
        minimumValue: 20
        stepSize: 20
        height: 50
        width : 200
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 155
        anchors.left: parent.left
        anchors.leftMargin: 365
        font.pixelSize: 40
        value: 100
    }

    Grid{
        id: _buttonGrid
        parent: _mainMapArea
        visible: false
        rows: 3
        columns: 3
        //learn more about column and row grid
        spacing: 5
        anchors.left: parent.left //learn more about anchors
        //use grids and layouts
        //learn layout management and layouts and diff types
        anchors.leftMargin: 50
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 50

        Repeater{
            id: _buttonSection
            model: ["↖️", "⬆️", "↗️",
                    "⬅", "🔃", "➡️",
                    "↙️", "⬇️", "↘️"]

            Button{
                text: modelData
                width: 100
                height: 100

                MouseArea{
                    id: _mouseAreaforButton
                    anchors.fill: parent
                    property bool is_clickAndHold: false;

                    Timer{
                        id: _buttonHoldTimer
                        interval: 300
                        repeat: true

                        onTriggered: {
                            if(_mouseAreaforButton.is_clickAndHold == true)
                                moveTheDrone();
                            else
                                _buttonHoldTimer.stop();
                        }
                    }

                    onPressed:{
                        is_clickAndHold = true;
                        moveTheDrone();
                        _buttonHoldTimer.start();
                    }

                    onReleased:{
                        _mouseAreaforButton.is_clickAndHold = false
                        _buttonHoldTimer.stop();
                    }
                }

                    function moveTheDrone(){
                            var distance = _distanceSpinBox.value //to get the distance to move

                            //rotate the drone direction
                        //identity the nose direction
                        //change the movemenet by taking nose dire of the drone
                            if(text === "↖️")
                                mapDroneMove.moveDrone(distance, 315);
                            else if(text === "⬆️")
                                mapDroneMove.moveDrone(distance, 0);
                            else if(text === "↗️")
                                mapDroneMove.moveDrone(distance, 45);
                            else if(text === "⬅")
                                mapDroneMove.moveDrone(distance, 270);
                            else if(text === "🔃")
                            {
                                //mapDroneMove.moveDrone(5);
                                mapDroneMove.droneLocation = homeLoc;
                                _dronePath.path = [homeLoc];
                            }
                            else if(text === "➡️")
                                mapDroneMove.moveDrone(distance, 90);
                            else if(text === "↙️")
                                mapDroneMove.moveDrone(distance, 215);
                            else if(text === "⬇️")
                                mapDroneMove.moveDrone(distance, 180);
                            else
                                mapDroneMove.moveDrone(distance, 135);
                            centerPoint = droneCoordinate;
                        }
            }
        }
    }

    Map{
        id: _mainMapArea
        anchors.fill: parent
        plugin: mapPlugin
        center: centerPoint
        zoomLevel: 16

        MouseArea{
            id: _mainMouseArea
            anchors.fill: parent
            onClicked: {
                var clickedCoord = _mainMapArea.toCoordinate(Qt.point(mouse.x, mouse.y));
                mapDroneMove.clickOnMap(clickedCoord);

                if(mapDroneMove.homeSet == true)
                {
                    _homeMarker.visible = true;
                }
            }
        }

        MapPolyline{
            id: _dronePath
            line.width: 5
            line.color: "red"
            path: []
        }

        //To show drone home
        MapQuickItem{
            visible: false
            id: _homeMarker
            coordinate: homeLoc
            anchorPoint.x: _homeImage.width/2
            anchorPoint.y: _homeImage.height/2

            sourceItem:  Image {
                id: _homeImage
                source: "file:///C:/Users/Ameer/OneDrive - aus.co.in/Documents/Qt_projects/qt_software_projects/qt_software_projects/mapV1/resources/drone_icon_1.webp"
                width: 35
                height: 35
            }
        }

        //drone icon
        MapQuickItem{
            id: _droneIcon
            coordinate: droneCoordinate
            anchorPoint.x: _doneIconImage.width/2
            anchorPoint.y: _doneIconImage.height/2

            sourceItem: Image {
                id: _doneIconImage
                source: "file:///C:/Users/Ameer/OneDrive - aus.co.in/Documents/Qt_projects/qt_software_projects/qt_software_projects/mapV1/resources/drone_icon.webp"
                width: 35
                height: 35
            }
        }

        Repeater{
            model: dro
        }
    }


    Button{
        id: _armStateButton
        parent: Window
        visible: isHomeSet
        text : "Arm the Drone"
        width: 200
        height: 100
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 50
        anchors.left: parent.left
        anchors.leftMargin: 365
        onClicked: {
            mapDroneMove.armButtonPressed(true);
            if(mapDroneMove.armState == false)
            {
                _armStateButton.text = "Arm the Drone"
                _buttonGrid.visible = false;
                _distanceSpinBox.visible = false;

            }
            else
            {
                _armStateButton.text = "Disarm the Drone"
                _buttonGrid.visible = true;
                _distanceSpinBox.visible = true;
            }
        }
    }
}
