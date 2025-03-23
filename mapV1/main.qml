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

        MouseArea{
            anchors.fill: parent
            onClicked: {
                var lat, lon, cord = _mapArea.toCoordinate(Qt.point(mouse.x, mouse.y))
                lat = cord.latitude
                lon = cord.longitude
                _droneData.returnOfLatLon(lat, lon)
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
}
