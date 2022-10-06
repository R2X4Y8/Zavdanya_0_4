#include <stdlib.h>
#include "functions.h"

Point** recycling_point(Point** points, int length) 
{
    int botpoiweig=smallest_weight(points, length);
    int nearest_point=search_(points, length, botpoiweig);
	
	Point* closest_point=points[nearest_point];
    Point* lowwepo=points[botpoiweig];
    closest_point->weight+=lowwepo->weight;
    free(points[botpoiweig]);

    for (int index=botpoiweig; index<length-1; index++)
        points[index]=points[index+1];

    points=realloc(points, length);
    return points;
}

Point** creating_points(int weightFrom, int weightTo, int xFrom, int xTo, int yFrom, int yTo, int length)
{
    Point** points=(Point**) malloc(sizeof(Point*)*length);

    for(int index=0; index<length; index++)
	{
        Point* point=(Point*) malloc(sizeof(Point));
        point->x=randoms(xFrom, xTo);
        point->y=randoms(yFrom, yTo);
        point->weight=randoms(weightFrom, weightTo);
        points[index]=point;
    }
    return points;
}

