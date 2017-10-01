#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    double funcion(double c);

private:
    Ui::MainWindow *ui;

public slots:
    void Metodo(); //Slot que realiza el método de gauss-seidel
    void limpiar(); //Slot that erases the contents of the spinbox and text
};

#endif // MAINWINDOW_H
