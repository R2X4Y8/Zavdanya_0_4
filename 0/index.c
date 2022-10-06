#include <stdlib.h>
#include <math.h>
#include "functions.h"

int smallest_weight(Point** points, int length) 
{
    int low_weight_index=0;
    for (int index = 0; index < length; index++)
        if (points[low_weight_index]->weight > points[index]->weight)
            low_weight_index=index;
            
    return low_weight_index;
}

int search_(Point** points, int length, int indexPointFrom)
{
    Point* coun = points[indexPointFrom];
    int min_distance = __INT_MAX__;
    int nearest_point_index = 0;

    for (int index = 0; index < length; index++)
	{
        if (index == indexPointFrom)
            continue;

        Point* indi=points[index];
        int distance=sqrt(pow(indi->x - coun->x, 2) + pow(indi->y - coun->y, 2));

        if (min_distance>distance) 
		{
            nearest_point_index=index;
			min_distance=distance;
        }
    }
    return nearest_point_index;
}

