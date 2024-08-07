import QtQuick 2.15

Rectangle{
    id:navSearchBox

    radius: 5

    color:"#ede9e8"
    anchors{
        left:lockIcon.left
        top:lockIcon.bottom
        topMargin: 40
    }

    width:parent.width*1/3
    height:parent.height*1/12
Image{

height:25

width:45
    id:searchIcon

    source:"/search.svg"


    anchors{

  left:parent.left

  top:parent.top
  bottom: parent.bottom
  leftMargin: 20


    topMargin:15
    bottomMargin:15

verticalCenter:parent.verticalCenter

    }
    fillMode: Image.PreserveAspectFit



}


Text{
    id:navigationPlaceHolderText
    color:"#373737"

            visible:navigationtextInput.text === ""


    text:"Navigate..."

    anchors{

        verticalCenter:parent.verticalCenter
        left:searchIcon.right

        leftMargin: 25


    }

    font.pixelSize: 16


}


TextInput{
    id:navigationtextInput
    anchors{
        top:parent.top
        bottom:parent.bottom
        right:parent.right

        left:searchIcon.right
        leftMargin: 25

        verticalCenter: parent.verticalCenter
    }

    font.pixelSize: 16
    verticalAlignment:Text.AlignVCenter

    clip:true
}
}
