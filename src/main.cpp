#include <QApplication>
#include <QLabel>
#include <QMainWindow>
#include <QWidget>

class wc : public QMainWindow {
public:
    wc() {
        QLabel *label = new QLabel(this);
        label->setText("first line\nsecond line");
    }


};

int main(int argc, char *argv[]) {

    // Creates the Tactile Houdini Qt Application
    QApplication th(argc, argv);


    QMainWindow window;
    window.resize(640, 480);
    QLabel *label = new QLabel(this);
    label->setText("first line\nsecond line");
    window.show();
    //QLabel label("Hello, World!");
    //label.show();



    // Calls the exec (static) function directly from the class, not its object
    // This is more efficient since the call doesn't rely on an object, rather on the function declaration
    return QApplication::exec();


}


/* 
https://code.visualstudio.com/docs/cpp/cmake-linux
*/
