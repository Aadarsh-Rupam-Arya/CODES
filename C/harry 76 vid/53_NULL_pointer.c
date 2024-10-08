#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
                
int main()
{
    int a = 34 ;
    // int * ptr = &a ;
    int * ptr = NULL ;
    
    printf("the adress of ptr is %d\n",ptr);

    if (ptr != NULL)
    printf("the adress of ptr is %d\n",ptr);
    else
    printf("The pointer is NULL pointer and cant be dereferenced\n");		 	
                
                
    return 0;
}