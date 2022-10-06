#include <stdio.h>
#include "functions.h"

void print(Point** points, int length) 
{
    Point* point;
    for(int index=0; index<length; index++) 
	{
        point=points[index];
        printf("Point position by coordinates: (x: %d, y: %d); point weight: %d\n", point->x, point->y, point->weight);
    }
}
