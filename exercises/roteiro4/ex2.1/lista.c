#include "lista.h"
#include <stdbool.h>
#include <stdio.h>

bool initArray(Array* a) {
  a->start = 1;
  a->end = a->start;
  return true;
}
bool isEmpty(Array* a) {
  if (a->start == a->end) return true;
  return false;
}
bool addElement(Array* a, Item item) {
  if (a->end > MAX_SIZE) return false;
  a->items[a->end -1] = item;
  a->end ++;
  return true;
}
bool removeElement(Pointer p, Array* a, Item* item) {
  int aux;
  if (isEmpty(a) || p >= a->end ) return false;
  *item = a->items[p-1];
  a->end --;
  for (aux = p; aux < a->end; aux++) {
    a->items[aux-1] = a->items[aux];
  }
  return true;
}
void printArray(Array* a) {
  int aux;
  printf("{\n");
  for ( aux = a->start-1; aux <= a->end - 3; aux++) {
    printf("%d\n", a->items[aux].value);
  }
  aux = a->end - 2;
  printf("%d\n", a->items[aux].value);
  printf("}\n");
}
int procura(Array* a, Item item) {
  int aux;
  for (aux= a->start-1; aux<=a->end-2; aux++) {
    if (item.value == a->items[aux].value) return aux+1;
  }
  return -1;
}
bool addElementOrderly(Array* a, Item item) {
  int aux = a->start-1;

  if (a->end > MAX_SIZE) return false;

  if (isEmpty(a)) {
    return addElement(a, item);
  }

  for (aux = a->start-1; aux<=a->end-2; aux++) {
    if (item.value <= a->items[aux].value) {
      a->end++;
      for (int j = a->end -2; j > aux; j-- ) {
        a->items[j] = a->items[j-1];
      }
      a->items[aux] = item;
      return true;
    } 
  }
  return addElement(a, item);
}

