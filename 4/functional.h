#ifndef FUNCTIONAL_H
#define FUNCTIONAL_H

typedef struct 
{
    int* array;
    int length,allowedlength;
} ArrayList;

ArrayList* newArrayList();

void fill(ArrayList* list, int length);
void print(ArrayList* list);
void add(ArrayList* list, int item);
void insert(ArrayList* list, int index, int item);
int size(ArrayList* list);
void remove_(ArrayList* list, int index); // There is a method named remove
void set(ArrayList* list, int index, int item);
int get(ArrayList* list, int index);


#endif
