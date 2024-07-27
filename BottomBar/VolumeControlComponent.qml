import QtQuick 2.15
Item {
    property string fontcolor: "#f0eded"

    width:120*(parent.width/1280)


    Rectangle {
        id: decrementButton
        anchors {
            right: volumeIcon.left

            rightMargin:15


            top: parent.top
            bottom: parent.bottom
        }
        width: height / 2
        color: "black"

        Text {
            id: decrementText
            color: fontcolor
            anchors.centerIn: parent
            text: "<"
            font.pixelSize: 24
            font.bold: true


        MouseArea {
            anchors.fill: parent
             onClicked: audioController.incrementVolume(-10)

        }
        }
    }

    Image {
        id: volumeIcon
        height:parent.height*.5
        fillMode: Image.PreserveAspectFit
        anchors {
            right: incrementButton.left
        rightMargin: 10
            verticalCenter: parent.verticalCenter
        }
        source:{
            if(audioController.volumeLevel<=1)
                return "../volume-mute.png"

            if(audioController.volumeLevel<50)
                return "../volume-up.png"

        else

                return  "../volume-up-interface-symbol.png"


        console.log(audioController.volumeLevel);





        // else if(audioContoller.volumeLevel<=50)
        //         return

    }
    }

    Rectangle {
        id: incrementButton
        width: height / 2
        color: "black"
        anchors {
            right:parent.right
            top:parent.top
            bottom:parent.bottom

        }

        Text {
            id: incrementText
            color: fontcolor
            anchors.centerIn: parent
            text: ">"
            font.pixelSize: 24
            font.bold: true

        MouseArea {
            anchors.fill: parent
           onClicked: audioController.incrementVolume(+10)
        }
    }
    }
}




