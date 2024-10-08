#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i = 5;

    int *ptr = &i;

    int **pptr = &ptr;

    printf("i = %d\n",i);
    printf("adress of i = %d\n",&i);
    printf("i = %d\n",*ptr);
    printf("adress of ptr = %d\n",&ptr);
    
    printf("value of ptr = %d\n",*pptr);

    printf("i = %d\n",**pptr);

   
}