#include "cell.h"
#include <QMouseEvent>
#include <QPalette>
#include <QColor>

my_cell::my_cell(QWidget *parent) : QWidget(parent)
{

state=0;


}

my_cell::~my_cell()
{
delete this;
}

void my_cell::mousePressEvent(QMouseEvent *event)
{

    QColor green(9,227,89);
    QPalette green_p(green);
    QColor white(255,255,255);
    QPalette white_p(white);
    QColor evil_c(Qt::red);
    QPalette evil(evil_c);

    Qt::MouseButtons mButtons=event->buttons();
    if(mButtons==Qt::LeftButton)
    {

        if (this->state==0){
            this->state=1;
        this->setPalette(green_p);
          }

        else
           {
            if(this->state==1)
        this->setPalette(white_p);
                //this->setPalette(evil);
            this->state=0;
        }
    }
    if(mButtons==Qt::RightButton)
    {
     if(this->state==0||this->state==1)
     {
         this->state=2;
         this->setPalette(evil);
     }
     else{
       this->setPalette(white_p);
         this->state=0;
       }
    }


}

