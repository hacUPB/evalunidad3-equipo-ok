#ifndef CONTEXT_H_
#define CONTEXT_H_
#include "istrategy.h"
typedef struct 
{
    istrategy* strategy;
    char* name;

}context;

context *context_new();
void context_ctor(context *, void *);
void context_dtor(context *);
void setstrategy(context *, void *);

void dosomebusinesslogic(context *);

#endif