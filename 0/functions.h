#ifndef FUNCTIONS_H
#define FUNCTIONS_H

typedef struct 
{
    int x,y,weight;
} Point;


Point** creating_points(int weightFrom, int weightTo, int xFrom, int xTo, int yFrom, int yTo, int length);
Point** recycling_point(Point** points, int length);

void print(Point** points, int length);
int randoms(int from, int to);
int smallest_weight(Point** points, int length);
int search_(Point** points, int length, int indexPointFrom); 

#endif
