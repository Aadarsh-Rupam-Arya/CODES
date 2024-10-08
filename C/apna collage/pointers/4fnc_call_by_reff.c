#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int square(int n){
    n = n*n ;
    printf("Square = %d\n",n);
}

int _square(int* n){
    *n = (*n) * (*n) ;
    printf("Square = %d\n",*n);
}


int main()
{
    int number = 4 ;

    square(number);
    printf("number = %d\n",number);
    _square(&number);
    printf("number = %d\n",number);
                
    return 0;
}