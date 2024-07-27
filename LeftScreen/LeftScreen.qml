import QtQuick 2.15

Rectangle {
id:leftScreen


anchors{
    top:parent.top
    bottom:bottomBar.top
    left:parent.left


}
color:"white"

Image{
    id:carRender

    anchors.centerIn: parent
    width:parent.width*.75
    fillMode:Image.PreserveAspectFit
   source: "/orangecar.jpg"


}

width: parent.width*1/3
}
