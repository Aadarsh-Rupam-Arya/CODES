#include <conio.h>
#include<stdio.h>

// printing the fibonacii series through different approach 

// fib through reccursive approach 

int fib_rec(int n ){
    if (n== 0 || n == 1){
        return n ;
    }
    else{
        return (fib_rec(n-1)+fib_rec(n-2));
    }
}

// fib through iterative approach 

int fib_iterative(int n){

}



              
int main()
{
    int a ;

    printf("Enter a no to find fibo series : ");
    scanf("%d",&a)   ;

         
                
    return 0;
}