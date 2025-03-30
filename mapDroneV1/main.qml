import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.0

import QtPositioning 5.6
import QtLocation 5.6

import droneData 1.0

Window {

    id: _mainUIWindow

    property var coordinatePoints : [] ;
    property var displayPolygonPoints : [coord1] ;
    property var centerPoint : QtPositioning.coordinate(13.328353, 77.080545);
    property var coord1;
    property var coord2;
    property var coord3;
    property var coord4;
    property var coord5;
    property var coord6;

    visible: true
    minimumHeight: 400
    minimumWidth: 600
    visibility: Window.Maximized
    title: "Map display on the drone"

    DroneData{
        id: _droneData
        onDroneLocationChanged: {
            //displayPolygonPoints = [];
            displayPolygonPoints = displayPolygonPoints.concat(_droneData.droneLocation);
            console.log(displayPolygonPoints);
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

    Map{
        id: _mainMapArea
        anchors.fill: parent
        plugin: mapPlugin
        center: centerPoint //QtPositioning.coordinate(13.328353, 77.080545)
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

        //to get the coordinate of the point at which the user click
        MouseArea{
            anchors.fill: parent
            onClicked: {
                var cord = _mainMapArea.toCoordinate(Qt.point(mouse.x, mouse.y))
                //console.log("Clicked on : " + cord);
                _droneData.getCoorFunction(cord);
            }
        }


        //this has to be changes
        MapPolyline {
            id: dronePath
            line.width: 5
            line.color: "red"
            path: displayPolygonPoints
        }


        //Polygon Marker
        MapQuickItem{
            id: _DroneHomeMarkers
            coordinate: coord1
            anchorPoint.x: _sHomeImage2.width/2
            anchorPoint.y: _sHomeImage2.height/2

            sourceItem: Image {
                id: _sHomeImage2
                source: "file:///C:/Users/Ameer/OneDrive - aus.co.in/Documents/Qt_projects/qt_software_projects/qt_software_projects/mapV1/resources/DonrHomeMarker.png"
                width: 35
                height: 35
            }
        }

        //points display
        MapQuickItem{
            coordinate: coord1
            anchorPoint.x: _point1.width/2
            anchorPoint.y: _point1.height/2

            sourceItem: Rectangle{
                id: _point1
                width: 10
                height: 10
                color: "red"
                radius: 4
            }
        }
        MapQuickItem{
            coordinate: coord2
            anchorPoint.x: _point2.width/2
            anchorPoint.y: _point2.height/2

            sourceItem: Rectangle{
                id: _point2
                width: 10
                height: 10
                color: "red"
                radius: 4
            }
        }
        MapQuickItem{
            coordinate: coord3
            anchorPoint.x: _point3.width/2
            anchorPoint.y: _point3.height/2

            sourceItem: Rectangle{
                id: _point3
                width: 10
                height: 10
                color: "red"
                radius: 4
            }
        }
        MapQuickItem{
            coordinate: coord4
            anchorPoint.x: _point4.width/2
            anchorPoint.y: _point4.height/2

            sourceItem: Rectangle{
                id: _point4
                width: 10
                height: 10
                color: "red"
                radius: 4
            }
        }
        MapQuickItem{
            coordinate: coord5
            anchorPoint.x: _point5.width/2
            anchorPoint.y: _point5.height/2

            sourceItem: Rectangle{
                id: _point5
                width: 10
                height: 10
                color: "red"
                radius: 4
            }
        }
        MapQuickItem{
            coordinate: coord6
            anchorPoint.x: _point6.width/2
            anchorPoint.y: _point6.height/2

            sourceItem: Rectangle{
                id: _point6
                width: 10
                height: 10
                color: "red"
                radius: 4
            }
        }

        MapQuickItem{
            id: _droneIcon
            coordinate: _droneData.droneLocation
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
        id: _missionButton
        parent: Window
        visible: _droneData.buttonShow
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 60
        width: 300
        height: 100
        text : "Load Poly on Point Clicked"
        onClicked: {
            console.log("Start Mission Button clicked!")
            coordinatePoints = [];
            for(var i=0; i<_droneData.displayhexagon.length; i++)
            {
                var cord = _droneData.displayhexagon[i];
                coordinatePoints.push(QtPositioning.coordinate(cord.latitude, cord.longitude));
            }
            coordinatePoints = coordinatePoints;
            console.log(coordinatePoints);
            centerPoint = coordinatePoints[0]; //aligns the map to the centerpoint

            //allocate the points
            coord1 = coordinatePoints[0];
            coord2 = coordinatePoints[1];
            coord3 = coordinatePoints[2];
            coord4 = coordinatePoints[3];
            coord5 = coordinatePoints[4];
            coord6 = coordinatePoints[5];
            _droneData.missionStart();
        }
    }
}
