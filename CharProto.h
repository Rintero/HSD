#ifndef CHARPROTO_H
#define CHARPROTO_H

class Charackter_proto{
public:
    Charackter_proto(float ATCK){
        this->ATCK = ATCK;
    }
   float HP;
   float ATCK;
   float CRate;
   float CDamage;

   float CritAtack(float base){
       return (base*CDamage);
   }

};


#endif // CHARPROTO_H
