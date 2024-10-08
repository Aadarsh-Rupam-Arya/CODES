#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a ;
    int *ptr;

    ptr = &a;
    *ptr = 34 ;
    printf("adress of a = %d\n",&a);
    printf("adress of ptr = %d\n",&ptr);

    printf("a = %d\n",a);
    printf("*ptr = %u\n",*ptr);

    *ptr +=5 ;

    printf("a = %d\n",a);
    printf("*ptr = %u\n",*ptr);

    (*ptr)++;             
    printf("*ptr = %d\n",*ptr);
                
    printf("adress of a = %d\n",&a);
    printf("adress of ptr = %d\n",&ptr);

    return 0;
}