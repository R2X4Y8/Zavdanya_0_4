#include <stdlib.h>
#include "functional.h"
#define DEFAULT_LENGTH 10

void listsize(ArrayList* list) //private methods
{
    int newLength=list->allowedlength*2;
    list->array=(int*)realloc(list->array, sizeof(int)*newLength);
    list->allowedlength=newLength;
}

ArrayList* newArrayList() 
{
    ArrayList* list=(ArrayList*)malloc(sizeof(ArrayList));

    list->array=(int*)malloc(sizeof(int)*DEFAULT_LENGTH);
    list->length=0;
    list->allowedlength=DEFAULT_LENGTH;

    return list;
}

void add(ArrayList* list, int item) 
{
    if(list->allowedlength<=list->length) 
        listsize(list);

    list->array[list->length]=item;
    list->length++;
}

void insert(ArrayList* list, int index, int item) 
{
    if(list->allowedlength<=list->length)
        listsize(list);

    for(int i=list->length; i>index; i--) 
        list->array[i]=list->array[i - 1];
        
    list->array[index]=item;
    list->length++;
}

int size(ArrayList* list) 
{
    return list->length;
}

void remove_(ArrayList* list, int index) // There is a method named remove
{
    for(int i = index; i<list->length; i++) 
        list->array[i]=list->array[i + 1];
        
    list->length--;
}

void set(ArrayList* list, int index, int item)
{
    list->array[index]=item;
}

int get(ArrayList* list, int index)
{
    return list->array[index];
}

