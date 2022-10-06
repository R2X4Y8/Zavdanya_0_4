#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#include "functions.h"

int main() 
{
    srand(time(NULL));
	printf("\nProgram running\n\n");
	
    int length = 5;
    Point** points = creating_points(1, 10, 1, 10, 1, 10, length);
    print(points, length);
    printf("\n");

    while (length > 1) 
	{
        points = recycling_point(points, length);
        length--;

        print(points, length);
        printf("\n");
    }
    printf("Last point:\nPoint position by coordinates: (x: %d, y: %d); point weight: %d\n", points[0]->x, points[0]->y, points[0]->weight);
	
	printf("\nProgram completed\n\n");
    return 0;
}


