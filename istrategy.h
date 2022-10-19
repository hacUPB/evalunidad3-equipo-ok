#ifndef ISTRATEGY_H_
#define ISTRATEGY_H_
typedef void (*doalgorithm)(void *);
typedef struct 
{
    doalgorithm algorithm;
}istrategy;

 char *funcion(istrategy*);
 istrategy *istrategy_new();
void istrategy_ctor(istrategy *);
void istrategy_dtor(istrategy *);
#endif