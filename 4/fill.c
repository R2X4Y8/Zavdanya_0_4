#include <stdlib.h>
#include "functional.h"

void fill(ArrayList* list, int length) 
{
    for(int index=0; index<length; index++) 
        add(list, rand()%10);
}
