#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "istrategy.h"

void __doalgorithm(void *name){
    char*result= malloc(sizeof(char[20]));
    strcpy(result,"Sin Strat");
    printf("%s",result);
    free(result);
}
istrategy *istrategy_new(){
    return(istrategy *)malloc(sizeof(istrategy));
}

void istrategy_ctor(istrategy * this){
    this->algorithm = &__doalgorithm;
}
void istrategy_dtor(istrategy *this){
    free(this);
}

