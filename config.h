#ifndef CONFIG_H
#define CONFIG_H
#include "cell.h"



class config : public QObject
{
 Q_OBJECT
public:
    bool crutches;
    config();
    ~config();
   my_cell *array[25][25];
   int next[25][25];
public slots:
   void woohoo();
   void stop();
   void clear();
};

#endif // CONFIG_H
