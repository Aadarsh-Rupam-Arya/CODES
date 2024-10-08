#include <conio.h>
#include<stdio.h>
#include<malloc.h>

void main()
{
    int* age = (int*) malloc(5*sizeof(int));
    *age = 150;
    printf("%d",*age);

    free(age);
                
}