#include <stdlib.h>
#include <stdio.h>
#include "functional.h"

void print(ArrayList* list) 
{
    for(int index=0; index<list->length; index++) 
        printf("%d ", get(list, index));
    printf("\n");
}
