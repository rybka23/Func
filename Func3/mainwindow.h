#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QPainter>
#include <QPainterPath>
#include <QPen>

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
    QPushButton * button;
    QLineEdit * lineEdit;

private slots:
    void submit();
    std::pair<double,double> on_pbSymmetry_clicked();
    std::pair<double,double> on_pbSymmetry_2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif
