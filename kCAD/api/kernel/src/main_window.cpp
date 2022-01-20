#include <main_window.h>
#include <ui_main_window.h>

namespace kernel::main_window
{
    MainWindow::MainWindow(QWidget *parent)
        : Parent{ parent }
        , m_ui{ std::make_unique<Ui::MainWindow>() }
    {
        m_ui->setupUi(this);

        resize(config::Width, config::Heigth);

        setWindowTitle(config::Title);
    }

    MainWindow::~MainWindow() = default;
}