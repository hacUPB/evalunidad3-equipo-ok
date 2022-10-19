#ifndef CONCRTESTRATEGYA_H_
#define CONCRTESTRATEGYA_H_
#include "istrategy.h"

typedef struct 
{
    istrategy strategya;
}concretestrategya;

concretestrategya *concretestrategya_new();
void concretestrategya_ctor(concretestrategya *);
void concretestrategya_dtor(concretestrategya *);

#endif