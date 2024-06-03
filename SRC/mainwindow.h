#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>

#include "gameboard.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QVBoxLayout *parentLay{};
    QHBoxLayout *topLay{};
    QHBoxLayout *bottomLay{};

    GameBoard board;

    QPushButton *stock{};

private slots:
    void set_stock_icon();
    void remove_stock_icon()
        {   stock->setIcon(QIcon());    }
};
#endif // MAINWINDOW_H
