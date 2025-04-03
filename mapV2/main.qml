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

    Grid{
        id: _buttonGrid
        parent: _mainMapArea
        visible: false
        rows: 3
        columns: 3
        spacing: 5
        anchors.left: parent.left
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
                onClicked: {
                    if(text === "↖️")
                        mapDroneMove.moveDrone(1);
                    else if(text === "⬆️")
                        mapDroneMove.moveDrone(2);
                    else if(text === "↗️")
                        mapDroneMove.moveDrone(3);
                    else if(text === "⬅")
                        mapDroneMove.moveDrone(4);
                    else if(text === "🔃")
                    {
                        mapDroneMove.moveDrone(5);
                        _dronePath.path = [homeLoc];
                    }
                    else if(text === "➡️")
                        mapDroneMove.moveDrone(6);
                    else if(text === "↙️")
                        mapDroneMove.moveDrone(7);
                    else if(text === "⬇️")
                        mapDroneMove.moveDrone(8);
                    else
                        mapDroneMove.moveDrone(9);
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
            }
            else
            {
                _armStateButton.text = "Disarm the Drone"
                _buttonGrid.visible = true;
            }
        }
    }
}
