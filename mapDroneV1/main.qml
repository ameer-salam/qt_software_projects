import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.0

import QtPositioning 5.6
import QtLocation 5.6

import droneData 1.0

Window {

    property var droneCooridnates : [] ;
    property var centerPoint : QtPositioning.coordinate(13.328353, 77.080545);

    visible: true
    minimumHeight: 400
    minimumWidth: 600
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
        center: centerPoint //QtPositioning.coordinate(13.328353, 77.080545)
        zoomLevel: 16

        Repeater{
            model: droneCooridnates
            delegate: MapQuickItem{
                coordinate: modelData
                anchorPoint.x: dotimage.width/2
                anchorPoint.y: dotimage.height/2
                sourceItem: Rectangle{
                    id: dotimage
                    width: 20
                    height: 20
                    color: "yellow"
                    radius: 10
                    border.color: "black"
                    border.width: 2
                }
            }
        }

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
            }
        }

        MapPolyline {
            id: dronePath
            line.width: 5
            line.color: "red"
            path: droneCooridnates
        }
    }

    Button{
        visible: _droneData.buttonShow
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 60
        width: 300
        height: 100
        text : "Start Mission"
        onClicked: {
            console.log("Start Mission Button clicked!")
            droneCooridnates = [];
            for(var i=0; i<_droneData.displayhexagon.length; i++)
            {
                var cord = _droneData.displayhexagon[i];
                droneCooridnates.push(QtPositioning.coordinate(cord.latitude, cord.longitude));
            }
            droneCooridnates = droneCooridnates;
            console.log(droneCooridnates);
            centerPoint = droneCooridnates[0]; //aligns the map to the centerpoint
        }
    }
}
