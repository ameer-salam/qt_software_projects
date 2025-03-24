import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.0

import droneData 1.0

import QtPositioning 5.6
import QtLocation 5.6

Window {
    visible: true
    minimumHeight: 500
    minimumWidth: 800
    visibility: Window.Maximized
    title: "Example of Drone on Map"

    DroneData{
        id: _droneData
    }

    Plugin {
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
        id: _mapArea
        anchors.fill: parent
        plugin: mapPlugin
        center: QtPositioning.coordinate(13.328353, 77.080545) //13.328353°N 77.080545°E
        zoomLevel: 16

        //to get the lat and long of the location where the mouse has been clicked
        MouseArea{
            anchors.fill: parent
            onClicked: {
                var lat, lon, cord =  _mapArea.toCoordinate(Qt.point(mouse.x, mouse.y))
                //console.log(cord);
                lat = cord.latitude
                lon = cord.longitude
                _droneData.returnOfLatLon(lat, lon)
            }
        }

        //to hold the position of my home
        MapQuickItem{
            id: _homeLoc
            coordinate: QtPositioning.coordinate(13.328353, 77.080545)
            anchorPoint.x: _homeImage.width/2
            anchorPoint.y: _homeImage.height/2

            //to load the image of the home
            sourceItem: Image {
                id: _homeImage
                source: "file:///C:/Users/Ameer/OneDrive - aus.co.in/Documents/Qt_projects/qt_software_projects/qt_software_projects/mapV1/resources/drone_icon_1.webp"
                width: 50//_homeImage.width/2
                height: 50 //_homeImage.height/2
            }
        }
    }


//    Column{
//        id: _column
//        spacing: 5
//        anchors.centerIn: parent
//    }


//        Button{
//            //anchors.bottom: parent.bottom
//            text: "Turn the Drone ON"
//            width: 200
//            height: 75
//            onClicked: {
//                _droneData.startTheDrone();
//            }
//        }

//    Button{
//        text: "Start Mission"
//        width: 200
//        height: 80
//        anchors.horizontalCenter: parent.horizontalCenter
//        anchors.bottom: parent.bottom
//        anchors.bottomMargin: 50
//     }
}
