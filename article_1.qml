import QtQuick 2.15
import QtQuick.Window 2.15

Window {
    id: main_window
    width: rect_half.height
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle {
        id: rect_half
        width: main_window.width / 3
        height: main_window.width / 2
        color: "blue"
    }
}
