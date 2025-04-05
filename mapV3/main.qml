import QtQuick 2.5
import QtQuick.Window 2.2
import QtQuick.Controls 1.0

import QtPositioning 5.3
import QtLocation 5.6


Window {
    visible: true
    visibility: Window.Maximized
    minimumHeight: 400
    minimumWidth:600
    title: "Mavlink Map"

    Plugin{
        id: _mapPlugin
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

    Map
    {
        visible: true
        anchors.fill: parent
        plugin: _mapPlugin
        zoomLevel: 16
    }

    Button{
        id: _loadLogFile

    }
}
