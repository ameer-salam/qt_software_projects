import QtQuick 2.5
import QtQuick.Controls 1.0
import QtQuick.Window 2.2

import QtPositioning 5.6
import Qtlocation 5.6

Window {
    visible: true
    visibility: Window.Maximized
    minimumHeight: 400
    minimumWidth: 600
    title: qsTr("Map and Drone Display")

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
}
