#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "context.h"

context *context_new(){
    return(context*)malloc(sizeof(context));
}
void context_ctor(context * this, void * strat){
    this->strategy=(istrategy*)strat;
    this->name=malloc(sizeof(char[20]));
    strcpy(this->name,"abcde");
}
void context_dtor(context *this){
    free(this->name);
}
void setstrategy(context *this, void *strat){
    this->strategy=(istrategy*)strat;
}
void dosomebusinesslogic(context *this){
    this->strategy->algorithm(this->name);
}