import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.0

import QtPositioning 5.6
import QtLocation 5.6

import droneData 1.0

Window {
    visible: true
    visibility: Window.Maximized
    title: "Map display on the drone"

    DroneData{
        id: _droneData
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

    Map{
        id: _mainMapArea
        anchors.fill: parent
        plugin: mapPlugin
        center: QtPositioning.coordinate(13.328353, 77.080545)
        zoomLevel: 16

        //To show my home
        MapQuickItem{
            id: _homeMarker
            coordinate: QtPositioning.coordinate(13.328353, 77.080545)
            anchorPoint.x: _homeImage.width/2
            anchorPoint.y: _homeImage.height/2

            sourceItem:  Image {
                id: _homeImage
                source: "file:///C:/Users/Ameer/OneDrive - aus.co.in/Documents/Qt_projects/qt_software_projects/qt_software_projects/mapV1/resources/drone_icon_1.webp"
                width: 50
                height: 50
            }
        }

        //to show s home
        MapQuickItem{
            id: _sHomeMarker
            coordinate: QtPositioning.coordinate(13.322527, 77.101740)
            anchorPoint.x: _sHomeImage.width/2
            anchorPoint.y: _sHomeImage.height/2

            sourceItem: Image {
                id: _sHomeImage
                source: "file:///C:/Users/Ameer/OneDrive - aus.co.in/Documents/Qt_projects/qt_software_projects/qt_software_projects/mapV1/resources/drone_icon_2.webp"
                width: 35
                height: 35
            }
        }

        MouseArea{
            anchors.fill: parent
            onClicked: {
                var cord = _mainMapArea.toCoordinate(Qt.point(mouse.x, mouse.y))
                //console.log("Clicked on : " + cord);
                _droneData.getCoorFunction(cord);

                //this was created to see if the button Q_Property is working
                //console.log("" + _droneData.buttonShow);
            }
        }
    }
    Button{
        visible: _droneData.buttonShow
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 50
        width: 300
        height: 100
        text : "Start Mission"
        onClicked: {
            console.log("Button clicked!")
        }
    }
}
