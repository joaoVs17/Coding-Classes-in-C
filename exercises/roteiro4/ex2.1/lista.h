#ifndef LISTA_H
#define LISTA_H

#include <stdbool.h>

#define MAX_SIZE 100


typedef int Pointer;
typedef int Value;
typedef struct {
  Value value;
} Item;
typedef struct {
  Item items[MAX_SIZE+1];
  Pointer start, end;
} Array;

bool initArray(Array*);
bool isEmpty(Array*);
bool addElement(Array*, Item);
bool removeElement(Pointer, Array *, Item*);
void printArray(Array*);
int procura(Array*, Item);
bool addElementOrderly(Array*, Item);

#endif
