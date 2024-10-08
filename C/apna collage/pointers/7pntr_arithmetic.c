#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a= 5 ;
    int*ptr = &a;

    printf("%d\n",ptr);

    ptr++;
    printf("%d\n",ptr);
    printf("%d\n",--ptr);

    int **pptr = &ptr;

    printf("%d\n",pptr);
    
    printf("%d\n",&ptr);


    



    // printf("%d\n",ptr+1);
    // printf("%d\n",ptr+2);
                
    return 0;
}