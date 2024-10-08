#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int swap(int a, int b)
{
    int t;
    t = a;
    a = b;
    b = t;
}

int _swap(int* a, int* b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    		 	
    int a = 4 , b = 6 ;
    printf("values before swap a = %d , b = %d \n",a,b);
    swap(a,b);
    printf("values after swap a = %d , b = %d \n",a,b);  // this remains same 
   
    _swap(&a,&b);
    printf("values after swap a = %d , b = %d \n",a,b);  // this remains same 


   
                
    return 0;
}