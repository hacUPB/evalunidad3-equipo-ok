#ifndef CONCRTESTRATEGYB_H_
#define CONCRTESTRATEGYB_H_
#include "istrategy.h"

typedef struct 
{
    istrategy strategyb;
}concretestrategyb;
char* invertir(char*);
concretestrategyb *concretestrategyb_new();
void concretestrategyb_ctor(concretestrategyb *);
void concretestrategyb_dtor(concretestrategyb *);

#endif