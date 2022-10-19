#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "context.h"
#include "istrategy.h"
#include "concretestrategyb.h"
#include "concretestrategya.h"

int main(void){
    istrategy* Master =istrategy_new();
    istrategy_ctor(Master);
    
    concretestrategya* strata= concretestrategya_new();
    concretestrategya_ctor(strata);
    
    concretestrategyb* stratb= concretestrategyb_new();
    concretestrategyb_ctor(stratb);

    context *Mastercontext= context_new();
    context_ctor(Mastercontext,strata);

    printf("Client: Strategy is set to reverse sorting.");
    dosomebusinesslogic(Mastercontext);
    printf(" ");
    printf("Client: Strategy is set to reverse sorting.");
    setstrategy(Mastercontext, stratb);
    dosomebusinesslogic(Mastercontext);

    context_dtor(Mastercontext);
    free(Mastercontext);
    free(strata);
    free(stratb);
    
    return 0;
}