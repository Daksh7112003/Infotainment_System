import QtQuick 2.15

Rectangle {
    id: bottomBar
    anchors {
        left: parent.left
        right: parent.right
        bottom: parent.bottom
    }
    color: "black"
    height: parent.height / 12

    Image {
        id: electriccarimage
        width: 50
        anchors {
            left: parent.left
            leftMargin: 30
            verticalCenter: parent.verticalCenter
        }
        source: "/electric-car.png"
    }

    HVACComponent {
        id: driverHVACControl
        anchors {
            top: parent.top
            bottom: parent.bottom
            left: electriccarimage.right
            leftMargin: 50
        }
        hvacController: driverHVAC
    }

    HVACComponent {
        id: passengerHVACControl
        anchors {
            top: parent.top
            bottom: parent.bottom
            right: volumeControl.left
            rightMargin: 140

        }
        hvacController: passengerHVAC
    }


    VolumeControlComponent{
        id:volumeControl

        anchors{
            right:parent.right
            rightMargin: 20
            top:parent.top
            bottom:parent.bottom

        }


    }


    Image{
        id:phoneImage
        width: 50
           fillMode: Image.PreserveAspectFit
        anchors {
            left: driverHVACControl.right
            leftMargin: 200
            verticalCenter: parent.verticalCenter
        }

        source:"/phone.png"
    }

    Image{
        id:fanImage
        width: 50
           fillMode: Image.PreserveAspectFit
        anchors {
            left: phoneImage.right
            leftMargin: 30
            verticalCenter: parent.verticalCenter
        }

        source:"/fan.png"

    }



    Image{
        id:musicImage
        width: 50
           fillMode: Image.PreserveAspectFit
        anchors {
            left: fanImage.right
            leftMargin: 30
            verticalCenter: parent.verticalCenter
        }

        source:"/music.png"

    }




    Image{
        id:defrostImage
        width: 50
           fillMode: Image.PreserveAspectFit
        anchors {
            left: musicImage.right
            leftMargin: 30
            verticalCenter: parent.verticalCenter
        }

        source:"/defrost.png"

    }



    // Image{
    //     id:mobileImage
    //     width: 50
    //     anchors {
    //         left: defrostImage.right
    //         leftMargin: 20
    //         verticalCenter: parent.verticalCenter
    //     }

    //     source:"/mobile.png"

    // }

    Image{
        id:mobileImage
        width: 50
   fillMode: Image.PreserveAspectFit
        anchors {
            left: defrostImage.right
            leftMargin: 30
            verticalCenter: parent.verticalCenter
        }

        source:"/phone-cal.png"

    }


    Image{
        id:ytImage
        width: 50
           fillMode: Image.PreserveAspectFit
        anchors {
            left: mobileImage.right
            leftMargin: 30
            verticalCenter: parent.verticalCenter
        }

        source:"/youtube.png"

    }

    // Image{
    //     id:mobileImage
    //     width: 50
    //     anchors {
    //         left: defrostImage.right
    //         leftMargin: 20
    //         verticalCenter: parent.verticalCenter
    //     }

    //     source:"/mobile.png"

    // }




}

