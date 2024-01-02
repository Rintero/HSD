#ifndef HIMEKO_H
#define HIMEKO_H
#include "CharProto.h"


class Himeko: public Charackter_proto{
  public:
    Himeko(float ATCK): Charackter_proto(ATCK){}
    float Base_Atck(){return ATCK; }
    float Skill_Atck(){return ATCK*3;}

};
#endif // HIMEKO_H
