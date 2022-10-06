#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "functions.h"

int randoms(int from, int to) 
{
    return rand()%(to-from)+from;
}
