#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "concretestrategya.h"

void __algorithma(void * name){
    printf("Context: Sorting data using the strategy (not sure how it'll do it)");
    char *result =malloc(sizeof(char[20]));
    strcpy(result,(char*)name);
    printf(" ");
    printf("%s\n",result);

    free(result);
}

concretestrategya *concretestrategya_new(){
    return(concretestrategya*)malloc(sizeof(concretestrategya));
}

void concretestrategya_ctor(concretestrategya *this){
    istrategy_ctor((istrategy*)this);
    this->strategya.algorithm= __algorithma;
}

void concretestrategya_dtor(concretestrategya *this){
    istrategy_dtor((istrategy*)this);
}