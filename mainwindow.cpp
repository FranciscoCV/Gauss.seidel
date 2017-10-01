#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>  //Bookstore for the use of text strings
#include <cmath>    //Library for use of mathematical functions
#include "QDoubleSpinBox"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connections of the buttons to use.
    // each button with its corresponding name to be able to perform the manipulation of these.
    connect(ui->Metodo,SIGNAL(clicked()),this,SLOT(Metodo()));
    connect(ui->limpiar,SIGNAL(clicked()),this,SLOT(limpiar()));
    connect(ui->salir,SIGNAL(clicked()),this,SLOT(close()));

}

MainWindow::~MainWindow()
{
    delete ui;
}
 void MainWindow::Metodo (){   // method to use to solve the program
   QString temp,temp2,temp3,temp4,temp5,temp6; //Temporary use text strings. This strings serve to display on the screen the messages we say.                                           
   double a1=ui->a1->value();               // for example, display the results in a text box.
   double a2=ui->a2->value();
   double a3=ui->a3->value();
   double a4=ui->a4->value();
   double b1=ui->b1->value();               // double b2=ui->b2->value();. These expressions serve to make the connection of the elements of the grafuca interface with the code.
   double b2=ui->b2->value();
   double b3=ui->b3->value();
   double b4=ui->b4->value();
   double c1=ui->c1->value();
   double c2=ui->c2->value();
   double c3=ui->c3->value();
   double c4=ui->c4->value();
   double d1=ui->d1->value();
   double d2=ui->d2->value();
   double d3=ui->d3->value();
   double d4=ui->d4->value();
   double e1=ui->e1->value();
   double e2=ui->e2->value();
   double e3=ui->e3->value();
   double e4=ui->e4->value();
   double err=ui->Error->value();
   double It=ui->Itera->value();
   // Initialization of the variables all landed to zero, together with the constants. This is done to determine the value of a literal.
   double x1=0.0, x2=0, x3=0, x4=0, er1=0, er2=0, er=0;
   int iinteraciones=0;   // the iteration variable is initialized to zero

   while((iinteraciones<It)&&(er<err)){    // repetitive cycle while. while the number of iterations performed by the program is less than the iterations established by the user or the output is less than the error entered by the user, the cycle will be executed
    er1=(x1*x2*x3*x4);
    x1=(e1-(b1*x2)-(c1*x3)-(d1*x4))/a1;
    x2=(e2-(a2*x1)-(c2*x3)-(d2*x4))/b2;        // Ecuaciones que  permiten encontrar el valor de las literales.
    x3=(e3-(a3*x1)-(b3*x2)-(d3*x4))/c3;        // The cycle is repeated until finding the correct value of the variables, when the established conditions
    x4=(e4-(a4*x1)-(b4*x2)-(c4*x3))/d4;

    er2=(x1*x2*x3*x4);                          //Calculation of the second error
    er=100*(std::abs((er2-er1)/er2));             //Calculo del valor absoluto
    iinteraciones++;                            //Counter increment
}
   // Expressions that allow the printing of text strings on the screen.
   temp.append("x1=").append(temp2.setNum(x1)).append("\nx2=").append(temp3.setNum(x2)).append("\nx3=").append(temp4.setNum(x3)).append("\nx4=").append(temp5.setNum(x4)).append("\nError=").append(temp5.setNum(er));
   ui->x4->setText(temp);  // the value of the first literal to be found is displayed
   }

 void MainWindow::limpiar(){
    ui->a1->setValue(0.0);
    ui->a2->setValue(0.0);              // All items are set to zero, to erase their contents and again
    ui->a3->setValue(0.0);              // be able to place new values
    ui->a4->setValue(0.0);
    ui->b1->setValue(0.0);
    ui->b2->setValue(0.0);
    ui->b3->setValue(0.0);
    ui->b4->setValue(0.0);
    ui->c1->setValue(0.0);
    ui->c2->setValue(0.0);
    ui->c3->setValue(0.0);
    ui->c4->setValue(0.0);
    ui->d1->setValue(0.0);
    ui->d2->setValue(0.0);
    ui->d3->setValue(0.0);
    ui->d4->setValue(0.0);
    ui->e1->setValue(0.0);
    ui->e2->setValue(0.0);
    ui->e3->setValue(0.0);
    ui->e4->setValue(0.0);
}
