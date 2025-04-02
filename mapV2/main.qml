import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.0

import QtLocation 5.6
import QtPositioning 5.6

import mapDroneMove 1.0


Window {
    id: _mapwindow
    visible: true
    visibility: Window.Maximized
    minimumHeight: 400
    minimumWidth: 600
    title: "Drone Movemennt Qt_Task-2"

    MapDroneMove{
        id: mapDroneMove
    }

    //variables
    property var centerPoint: QtPositioning.coordinate(13.328353, 77.080545);
    property var clickedPoint;
    property var homeLocationOnMap: mapDroneMove.homeLocation
    property var droneLiveLocation;


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

    Map{
        id: _mainMainArea
        plugin: mapPlugin
        zoomLevel: 16
        anchors.fill: parent
        center: centerPoint


        MouseArea{
            id: _mouseAreaOnMainMap
            anchors.fill:parent
            onClicked: {
                clickedPoint = _mainMainArea.toCoordinate(Qt.point(mouse.x, mouse.y));
                //console.log("Clicked on : " + clickedPoint);
                mapDroneMove.getCoordinate(clickedPoint);
                centerPoint= mapDroneMove.homeLocation;
            }

        }


        MapQuickItem{
            id: _droneIcon
            visible: mapDroneMove.home
            anchorPoint.x: droneImage.width/2
            anchorPoint.y: droneImage.height/2 //change to drone location
            coordinate: droneLiveLocation
            sourceItem: Image{
                id: droneImage
                width: 40
                height: 40
                source: "file:///C:/Users/Ameer/OneDrive - aus.co.in/Documents/Qt_projects/qt_software_projects/qt_software_projects/mapV2/icons/droneImage.png"
            }
        }

        MapQuickItem{
            id: _homeLocation
            visible: mapDroneMove.home
            anchorPoint.x : homeImage.width/2
            anchorPoint.y : homeImage.height/2
            coordinate: mapDroneMove.homeLocation
            sourceItem: Image{
                id: homeImage
                source: "file:///C:/Users/Ameer/OneDrive - aus.co.in/Documents/Qt_projects/qt_software_projects/qt_software_projects/mapV1/resources/drone_icon_1.webp"
                width: 35
                height: 35

            }
        }

        Button{
            id: _armingButton
            visible: mapDroneMove.home
            text: "Arm the  Drone"
            width: 300
            height: 100
            anchors.bottom: parent.bottom
            anchors.bottomMargin: 50
            anchors.left: parent.left
            anchors.leftMargin: 50
            onClicked: {
                if(mapDroneMove.droneArmed === false)
                {
                    //mapDroneMove.setDroneArmed(true);
                    _armingButton.text= "Disarm the drone";
                }
            }
        }
    }

}
