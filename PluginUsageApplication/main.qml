import QtQuick 2.12
import QtQuick.Window 2.12
import com.mycompany.qmlcomponents 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Plugin Usage Application")

    MyButton {
        id: myBtn
    }

    Rectangle {
        id: myRect
        width: parent.width*0.4
        height: parent.height*0.2
        color: "red"

        Text {
            anchors.centerIn: parent
            text: "MyButton Plugin"
        }

        anchors.centerIn: parent

        MouseArea {
            anchors.fill: parent

            onClicked: myBtn.printButtonData();
        }
    }
}
