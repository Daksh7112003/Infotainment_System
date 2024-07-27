import QtQuick 2.15
import QtLocation 5.12
import QtPositioning 5.11

Rectangle {
    id: rightScreen
    anchors {
        top: parent.top
        bottom: bottomBar.top
        right: parent.right
    }

    width: parent.width * 2 / 3

    Plugin {
        id: mapPlugin
              name: "osm"
        PluginParameter {
            name: "mapbox.access_token"
            value: "pk.eyJ1Ijoic3Rob3ZpbmEiLCJhIjoiY2x4MHN2cDN2MDN4NzJxcTF2MW1iYmhlZCJ9.Cr-oW81qN-6ElJ1A1kZeVQ"
        }
    }

    Map {
        anchors.fill: parent
        plugin: mapPlugin
        center: QtPositioning.coordinate(37.46, -122.14)
        // center: QtPositioning.coordinate(43.088947, -76.154480) // Oslo
               zoomLevel: 14
               // center: QtPositioning.coordinate(43.088947, -76.154480) // Oslo
               //        zoomLevel: 14
    }

    Image {
        id: lockIcon
        anchors {
            left: parent.left
            top: parent.top
            margins: 20
        }
        width: parent.width / 30
        fillMode: Image.PreserveAspectFit
        source:  (systemHandler.carLocked? "/lock.png" : "/unlock.png")
        MouseArea{
            anchors.fill:parent
            onClicked: systemHandler.setCarLocked(!systemHandler.carLocked)
        }
    }

    Text{
      id:dateTimeDisplay


      anchors{
          left:lockIcon.right
          leftMargin: 35




          bottom:lockIcon.bottom

      }



      font.pixelSize: 15

      font.bold:true

      color:"black"

    text:systemHandler.currentTime


    }

    Text{
        id:outdoorTemperatureDisplay
        anchors{
            left:dateTimeDisplay.right
            leftMargin: 35
            bottom:lockIcon.bottom

        }

        font.pixelSize: 14
        font.bold:true
        color:"black"

        text:systemHandler.outdoorTemp + "°F"


    }

    Text{
        id:userNameDisplay
        anchors{
            left:outdoorTemperatureDisplay.right
            leftMargin: 35

            bottom:lockIcon.bottom

        }

        font.pixelSize: 14
        font.bold:true
        color:"black"

        text:systemHandler.userName
    }


    NavigationSearchBox{
        id:navSearchBox
    }


}
