#include <conio.h>
#include<stdio.h>

int fib(int n);   

int main()
{
    int a=9 ; 
    printf("%d",fib(a));

                
    return 0;
}

int fib (int n){
    if (n<=1)
        return n ;

    return fib(n-1) + fib(n-2);

}