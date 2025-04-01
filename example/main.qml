import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.0

import QtPositioning 5.6
import QtLocation 5.6


Window{

    property var listofCoord: [QtPositioning.coordinate(13.328353, 77.080545),
                        QtPositioning.coordinate(13.329366, 77.080661),
                        QtPositioning.coordinate(13.330324, 77.081419),
                        QtPositioning.coordinate(13.328353, 77.080545)] ;
    property var displayList: [];
    visible: true
    visibility: Window.Maximized
    minimumHeight: 400
    minimumWidth: 600

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
        plugin: mapPlugin
        anchors.fill: parent
        center: QtPositioning.coordinate(13.328353, 77.080545)
        zoomLevel: 12

        MapPolyline{
            id: _drawLine
            line.width: 5
            line.color: "green"
            path: displayList
        }
    }

    Button{
        text: "click here"
        //parent: Window
        anchors.bottom: parent.bottom
        anchors.bottomMargin: 50
        anchors.horizontalCenter: parent.horizontalCenter
        height: 100
        width: 300
        onClicked: {
            for(var i=0; i<listofCoord.length; i++){
                displayList.push(listofCoord[i]);
                displayList = displayList;
            }
        }
    }
}
