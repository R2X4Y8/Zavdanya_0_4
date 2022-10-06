#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "functional.h"

int main() 
{
    srand(time(NULL));
    
	printf("\nProgram running\n\n");

    ArrayList* list = newArrayList();

    printf("testing the add(item) method\n");
    printf("Let's add 10 elements\n");
    fill(list, 10);
    print(list);
    printf("\n");

    printf("checking the insert(index, element) method\n");
    printf("apply insertion twice\n");
    insert(list, 5, 777);
    insert(list, 6, 666);
    print(list);
    printf("\n");

    printf("checking the size() method\n");
    printf("Size is %d\n\n", size(list));

    printf("checking the remove(index) method\n");
    printf("apply delete twice\n");
    remove_(list, list->length - 1);
    remove_(list, list->length - 1);
    print(list);
    printf("\n");

    printf("checking the size() method\n");
    printf("Size is %d\n\n", size(list));

    printf("checking the set(index, item) method\n");
    printf("Change the first and last element to 999 and 888\n");
    set(list, 0, 999);
    set(list, 9, 888);
    print(list);
    printf("\n");

    printf("checking the get(index) method\n");
    printf("get the values of three elements\n\n");
    printf("Element by index 0 is %d\n", get(list, 0));
    printf("Element by index 5 is %d\n", get(list, 5));
    printf("Element by index 10 is %d\n", get(list, 9));
    printf("\n");

    printf("checking the size() method\n");
    printf("Size is %d\n\n", size(list));
    
	printf("\nProgram completed\n\n");
    return 0;
}
