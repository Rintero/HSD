#ifndef STARTSIM_H
#define STARTSIM_H
#include "includer.h"


class Simulation{
  public:

    float Start_Sim(){
        Boss boss(10000);
        Himeko him(333);
        std::cout << "start";
        int counter=0;
        while(boss.HP > 0){
            boss.HP-=him.Base_Atck();
            counter++;
            std::cout << boss.HP;
        }

        return counter;

    }
};
#endif // STARTSIM_H
