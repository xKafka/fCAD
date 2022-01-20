#include <QApplication>

#include <main_window.h>

#include <concepts>
#include <type_traits>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    kernel::main_window::MainWindow mainWindow;

    mainWindow.show();

    return a.exec();
}