#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "concretestrategyb.h"

void __algorithmb(void * name){
    printf("Context: Sorting data using the strategy (not sure how it'll do it)");
    char *result =malloc(sizeof(char[20]));
    strcpy(result,(char*)name);
    invertir(result);
    printf(" ");
    printf("%s\n",result);
    free(result);
}

concretestrategyb *concretestrategyb_new(){
    return(concretestrategyb*)malloc(sizeof(concretestrategyb));
}

void concretestrategyb_ctor(concretestrategyb *this){
    istrategy_ctor((istrategy*)this);
    this->strategyb.algorithm= __algorithmb;
}

void concretestrategyb_dtor(concretestrategyb *this){
    istrategy_dtor((istrategy*)this);
}

char * invertir(char * inver){
     char *p1, *p2;

      if (! inver || ! *inver)
            return inver;
      for (p1 = inver, p2 = inver + strlen(inver) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return inver;
}