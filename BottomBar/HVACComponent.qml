// import QtQuick 2.15


// Item{
// property string fontcolor:"#f0eded"
//     property var hvacController

// Rectangle{

//     id:decrementButton

//     anchors{
//         left:parent.right
// top:parent.top
//         bottom:parent.bottom
//     }

//     width:height/2
//     color:"black"

//     Text{

//     id:decrementText
//     color:fontcolor

//     anchors.centerIn:parent
//     text:"<"
//     font.pixelSize:24
//     font.bold:true
// }

//     MouseArea{
//         anchors.fill:parent
//         onClicked: hvacController.incrementTargetTemperature(-1)
//     }
// }


//     Text{

//         id:targetTemperatureText
//         anchors{
//             left:decrementButton.right
//             leftMargin: 15
//             verticalCenter: parent.verticalCenter

//         }
//         color:"#f0eded"
//         text:hvacController.targetTemperature


//         font.pixelSize:24
//         font.bold:true
//     }

//     // Rectangle{

//     Text{
//         id:incrementButton
//         anchors{
//             left: targetTemperatureText.right
//             leftMargin:15
//             verticalCenter: parent.verticalCenter

//         }

//         text:">"

//         font.bold: true;
//         font.pixelSize: 24
//         color:"#f0eded"


//         MouseArea{
//             anchors.fill:parent
//             onClicked: hvacController.incrementTargetTemperature(+1)
//         }


//     }



//     Text{
//         id:decrementtext1
//         color:"#f0eded"

//         text:"<"
//         font.pixelSize:24
//         font.bold:true
//         anchors.left:incrementButton.right
//         anchors.leftMargin:1000
//         anchors.verticalCenter: parent.verticalCenter


//         MouseArea{
//             anchors.fill:parent
//             onClicked: hvacController.incrementTargetTemperature(-1)
//         }

//     }


//     Text{
//         id:targetTemperatureText1
//         anchors{
//             left:decrementtext1.right
//             leftMargin: 10
//             verticalCenter: parent.verticalCenter

//         }
//         color:"#f0eded"
//         text:driverHVACControl
//         font.pixelSize:24
//         font.bold:true
//     }

//     Text{
//         id:incrementText1
//         anchors{
//             left:targetTemperatureText1.right
//             leftMargin: 15
//             verticalCenter: parent.verticalCenter

//         }
//         color:"#f0eded"
//         text:">"
//         font.pixelSize:24
//         font.bold:true

//         MouseArea{
//             anchors.fill:parent
//             onClicked: hvacController.incrementTargetTemperature( + 1 )
//         }
//     }



// }



// import QtQuick 2.15

// Item {
//     property string fontcolor: "#f0eded"
//     property var hvacController

//     Rectangle {
//         id: decrementButton
//         anchors {
//             left: parent.right
//             top: parent.top
//             bottom: parent.bottom
//         }
//         width: height / 2
//         color: "black"

//         Text {
//             id: decrementText
//             color: fontcolor
//             anchors.centerIn: parent
//             text: "-"
//             font.pixelSize: 24
//             font.bold: true
//         }

//         MouseArea {
//             anchors.fill: parent
//             onClicked: hvacController.incrementTargetTemperature(-1)
//         }
//     }

//     Text {
//         id: targetTemperatureText
//         anchors {
//             left: decrementButton.right
//             leftMargin: 15
//             verticalCenter: parent.verticalCenter
//         }
//         color: "#f0eded"
//         text: hvacController.targetTemperature
//         font.pixelSize: 24
//         font.bold: true
//     }

//     Text {
//         id: incrementButton
//         anchors {
//             left: targetTemperatureText.right
//             leftMargin: 15
//             verticalCenter: parent.verticalCenter
//         }
//         text: "+"
//         font.bold: true
//         font.pixelSize: 24
//         color: "#f0eded"

//         MouseArea {
//             anchors.fill: parent
//             onClicked: hvacController.incrementTargetTemperature(+1)
//         }
//     }

//     Text {
//         id: decrementtext1
//         color: "#f0eded"
//         text: "-"
//         font.pixelSize: 24
//         font.bold: true
//         anchors.left: incrementButton.right
//         anchors.leftMargin: 1000
//         anchors.verticalCenter: parent.verticalCenter

//         MouseArea {
//             anchors.fill: parent
//             onClicked: hvacController.incrementTargetTemperature(-1)
//         }
//     }

//     Text {
//         id: targetTemperatureText1
//         anchors {
//             left: decrementtext1.right
//             leftMargin: 10
//             verticalCenter: parent.verticalCenter
//         }
//         color: "#f0eded"
//         text: driverHVACControl
//         font.pixelSize: 24
//         font.bold: true
//     }

//     Text {
//         id: incrementText1
//         anchors {
//             left: targetTemperatureText1.right
//             leftMargin: 15
//             verticalCenter: parent.verticalCenter
//         }
//         color: "#f0eded"
//         text: "+"
//         font.pixelSize: 24
//         font.bold: true

//         MouseArea {
//             anchors.fill: parent
//             onClicked: hvacController.incrementTargetTemperature(+1)
//         }
//     }
// }





// import QtQuick 2.15

// Item {
//     property string fontcolor: "#f0eded"
//     property var hvacController

//     Row {
//         spacing: 15
//         anchors.centerIn: parent

//         Rectangle {
//             width: 40
//             height: 40
//             color: "transparent"

//             Text {
//                 id: decrementText
//                 color: fontcolor
//                 anchors.centerIn: parent
//                 text: "-"
//                 font.pixelSize: 24
//                 font.bold: true
//             }

//             MouseArea {
//                 anchors.fill: parent
//                 onClicked: hvacController.incrementTargetTemperature(-1)
//             }
//         }

//         Text {
//             id: targetTemperatureText
//             color: fontcolor
//             text: hvacController.targetTemperature
//             font.pixelSize: 24
//             font.bold: true
//         }

//         Rectangle {
//             width: 40
//             height: 40
//             color: "transparent"

//             Text {
//                 id: incrementText
//                 color: fontcolor
//                 anchors.centerIn: parent
//                 text: "+"
//                 font.pixelSize: 24
//                 font.bold: true
//             }

//             MouseArea {
//                 anchors.fill: parent
//                 onClicked: hvacController.incrementTargetTemperature(+1)
//             }
//         }
//     }

//     Row {
//         spacing: 15
//         anchors.verticalCenter: parent.verticalCenter
//         anchors.right: parent.right
//         anchors.rightMargin: 15

//         Rectangle {
//             width: 40
//             height: 40
//             color: "transparent"

//             Text {
//                 id: decrementText1
//                 color: fontcolor
//                 anchors.centerIn: parent
//                 text: "-"
//                 font.pixelSize: 24
//                 font.bold: true
//             }

//             MouseArea {
//                 anchors.fill: parent
//                 onClicked: hvacController.incrementTargetTemperature(-1)
//             }
//         }

//         Text {
//             id: targetTemperatureText1
//             color: fontcolor
//             text: driverHVACControl
//             font.pixelSize: 24
//             font.bold: true
//         }

//         Rectangle {
//             width: 40
//             height: 40
//             color: "transparent"

//             Text {
//                 id: incrementText1
//                 color: fontcolor
//                 anchors.centerIn: parent
//                 text: "+"
//                 font.pixelSize: 24
//                 font.bold: true
//             }

//             MouseArea {
//                 anchors.fill: parent
//                 onClicked: hvacController.incrementTargetTemperature(+1)
//             }
//         }
//     }
// }




import QtQuick 2.15

Item {
    property string fontcolor: "#f0eded"
    property var hvacController
    width:90*(parent.width/1280)




    Rectangle{


        anchors{
            right:decrementButton.right
            left:decrementButton.left
        }

        Component.onCompleted:console.log(width)

    }

    Rectangle {
        id: decrementButton
        anchors {
            left: parent.right
            top: parent.top
            bottom: parent.bottom
        }
        width: height / 2
        color: "black"

        Text {
            id: decrementText
            color: fontcolor
            anchors.centerIn: parent
            text: "-"
            font.pixelSize: 24
            font.bold: true


        MouseArea {
            anchors.fill: parent
            onClicked: hvacController.incrementTargetTemperature(-1)
        }
        }
    }

    Text {
        id: targetTemperatureText
        anchors {
            left: decrementButton.right
            leftMargin: 10
            verticalCenter: parent.verticalCenter
        }
        color: "#f0eded"
        text: hvacController.targetTemperature
        font.pixelSize: 24
        font.bold: true
    }

    Rectangle {
        id: incrementButton
        width: height / 2
        color: "black"
        anchors {
            left: targetTemperatureText.right
            leftMargin: 25
            verticalCenter: parent.verticalCenter
        }

        Text {
            id: incrementText
            color: fontcolor
            anchors.centerIn: parent
            text: "+"
            font.pixelSize: 24
            font.bold: true


        MouseArea {
            anchors.fill: parent
            onClicked: hvacController.incrementTargetTemperature(+1)
        }
    }
    }
}




















































// import QtQuick 2.15
// import QtQuick.Controls 2.15

// Item {
//     property string fontcolor: "#f0eded"
//     property var hvacController

//     Row {
//         anchors.centerIn: parent
//         spacing: 20

//         Rectangle {
//             id: decrementButton
//             width: 50
//             height: 50
//             color: "black"

//             Text {
//                 id: decrementText
//                 color: fontcolor
//                 anchors.centerIn: parent
//                 text: "<"
//                 font.pixelSize: 24
//                 font.bold: true
//             }

//             MouseArea {
//                 anchors.fill: parent
//                 onClicked: hvacController.incrementTargetTemperature(-1)
//             }
//         }

//         Text {
//             id: targetTemperatureText
//             color: "#f0eded"
//             text: hvacController.targetTemperature
//             font.pixelSize: 24
//             font.bold: true
//         }

//         Rectangle {
//             id: incrementButton
//             width: 50
//             height: 50
//             color: "black"

//             Text {
//                 id: incrementText
//                 color: fontcolor
//                 anchors.centerIn: parent
//                 text: ">"
//                 font.pixelSize: 24
//                 font.bold: true





//             }

//             MouseArea {
//                 anchors.fill: parent
//                 onClicked: hvacController.incrementTargetTemperature(+1)
//             }
//         }
//     }

//     Row {
//         anchors.centerIn: parent
//         spacing: 20
//         anchors.bottom: parent.bottom
//         anchors.bottomMargin: 50

//         Rectangle {
//             id: decrementButton1
//             width: 50
//             height: 50
//             color: "black"

//             Text {
//                 id: decrementText1
//                 color: fontcolor
//                 anchors.centerIn: parent
//                 text: "<"
//                 font.pixelSize: 24
//                 font.bold: true
//             }

//             MouseArea {
//                 anchors.fill: parent
//                 onClicked: hvacController.incrementTargetTemperature(-2)
//             }
//         }

//         Text {
//             id: targetTemperatureText1
//             color: "#f0eded"
//             text: hvacController.targetTemperature
//             font.pixelSize: 24
//             font.bold: true
//         }

//         Rectangle {
//             id: incrementButton1
//             width: 50
//             height: 50
//             color: "black"

//             Text {
//                 id: incrementText1
//                 color: fontcolor
//                 anchors.centerIn: parent
//                 text: ">"
//                 font.pixelSize: 24
//                 font.bold: true
//             }

//             MouseArea {
//                 anchors.fill: parent
//                 onClicked: hvacController.incrementTargetTemperature(+1)
//             }
//         }
//     }
// }


