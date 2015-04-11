#ifndef CELL_H
#define CELL_H


#include <QObject>
#include <QWidget>


class my_cell : public QWidget
{
    Q_OBJECT
public:
    int state;
    explicit my_cell(QWidget *parent = 0);
    ~my_cell();

signals:

public slots:
protected:
     void mousePressEvent(QMouseEvent *event);
private:
     void update_color();
};

#endif // CELL_H
