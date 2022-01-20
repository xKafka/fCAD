#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <memory>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

namespace kernel::main_window
{
    namespace config
    {
        static constexpr auto Width{ 800 };

        static constexpr auto Heigth{ 600 };

        static constexpr auto Title{ "kCAD" };
    }

    class MainWindow final : public QMainWindow
    {
        using Parent = QMainWindow;

        Q_OBJECT

        std::unique_ptr<Ui::MainWindow> m_ui;

    public:
        explicit MainWindow(QWidget *parent = nullptr);

        ~MainWindow() final = default;
    };
}

#endif // MAINWINDOW_H
