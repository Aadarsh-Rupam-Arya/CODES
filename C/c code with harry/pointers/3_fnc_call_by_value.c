#include <conio.h>
#include<stdio.h>
int sum(int a , int b );

int main()
{
    		 	
    int a=4  , b= 7 ;
    printf("the val of a and b is %d and %d\n",a,b);
    printf("the sum of the val is : %d",sum(a,b));




                
    return 0;
}

int sum(int a , int b ){

    int c ;
    c = a + b;
    

    return c ; 
}