#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "poland.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    resize(800, 600);
    button = new QPushButton(this);
    lineEdit = new QLineEdit(this);
    button->setGeometry(this->width() - 100, 10, 90, 50);
    button->setText("Нарисовать");
    connect(button, SIGNAL(clicked()), this, SLOT(submit()));
    lineEdit->setGeometry(50, 10, 400, 25);
}

void MainWindow::submit() {
    const double pi = acos(-1);
    QPixmap pixMap(ui->label->width(), ui->label->height());
    QPainter painter;
    QPainterPath path;
    QPen pen;
    QString f,f_const;
    QString x;
    std::pair<double,double>xs,ys;
    double y;
    bool pr;
    bool flag=false;
    std::string f_string;
    f = lineEdit->text();
    f_string = f.toStdString();
    f_const=f;
    pr = calculate(f_string, y);
    pen.setWidth(1);
    pen.setColor(Qt::red);
    painter.begin(&pixMap);
    painter.setPen(pen);
    pixMap.fill(Qt::white);
    painter.pen();
    int xg, yg, xn, yn;
    xs=on_pbSymmetry_clicked();
    ys=on_pbSymmetry_2_clicked();
    double xmin=xs.first, xmax=xs.second;
    double ymin = ys.first, ymax = ys.second;
    int xgmax = pixMap.width(), xgmin = 0;
    int ygmax = pixMap.height(), ygmin = 0;
    double kx = (xgmax - xgmin) / (xmax - xmin);
    double ky = (ygmin - ygmax) / (ymax - ymin);
    double step = ((xmax - xmin) / (xgmax - xgmin))/100;
    xn = xgmin - kx * xmin;
    yn = ygmin - ky * ymax;
    f.replace('x', '('+QString::number(xmin)+')');
    f_string=f.toStdString();
    painter.drawLine(0, yn, xgmax, yn);
    painter.drawLine(xn, 0, xn, ygmax);
    pen.setColor(Qt::blue);
    painter.setPen(pen);
    for (double x = xmin; x <= xmax; x += step) {
        f.replace('x', '('+QString::number(x)+')');
        f_string=f.toStdString();
        pr = calculate(f_string, y);
        if (pr) {
            xg = xgmin + kx * (x - xmin);
            yg = ygmin + ky * (y - ymax);
            if (!flag){
                path.moveTo(xg, yg);
                flag=true;
            }
            if(y<=ymax&&y>=ymin){
            path.lineTo(xg, yg);
            }
            else{
                path.moveTo(xgmin + kx * (x+step - xmin), yg = ygmin + ky * (y+step - ymax));
            }
        }
        f=f_const;
    }
    painter.drawPath(path);
    ui->label->setPixmap(pixMap);
}

MainWindow::~MainWindow() {
    delete ui;
}

std::pair<double,double> MainWindow::on_pbSymmetry_clicked()
{
    double x1,x2;
    x1=ui->sbFrom->value();
    x2=ui->sbTo->value();
    return {x1,x2};
}


std::pair<double,double> MainWindow::on_pbSymmetry_2_clicked()
{
    double y1,y2;
    y1=ui->sbFrom->value();
    y2=ui->sbTo->value();
    return {y1,y2};
}

