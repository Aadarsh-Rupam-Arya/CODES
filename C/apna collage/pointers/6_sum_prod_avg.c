#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int work(int a ,int b ,int sum , int prod , int avg){
    sum = a+b ;
    prod = a*b;
    avg = (a+b)/2;
}
int pointers_work(int a ,int b ,int *sum , int *prod , int *avg){
    *sum = a+b ;
    *prod = a*b;
    *avg = (a+b)/2;
}



int main()
{
    int a = 4 , b = 2 ;
    int sum , prod , avg;

    work(a,b,sum, prod, avg);
    printf("without using pointers: ");
    printf("sum = %d prod = %d avg = %d\n",sum,prod,avg);

    pointers_work(a,b,&sum,&prod,&avg);
    printf("with using pointers: ");
    printf("sum = %d prod = %d avg = %d\n",sum,prod,avg);

    		 	
                
                
    return 0;
}
