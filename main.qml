import QtQuick 2.15
import QtQuick.Window 2.15

import "BottomBar"
import "\RightScreen"
import "\LeftScreen"



Window {
    width: 1500
    height: 750
    visible: true
    title: qsTr("Tesla Infotainment")
    color:white




    RightScreen{
        id:rightScreen
}


    LeftScreen{
        id:leftScreen
    }

BottomBar{
    id:bottomBar
}

}
