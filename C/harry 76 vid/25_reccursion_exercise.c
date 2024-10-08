#include <conio.h>
#include<stdio.h>

int fib(int n){
    if (n==0 || n == 1 ){
        return n;
    }
    
    else{
        return (fib(n-1)+fib(n-2));
    }
}

int main()
{
    int a ; 
    printf("enter the no of seq : ");
    scanf("%d",&a);

    for (int i = 0; i<a ; i++){
        printf("%d ",fib(i));
    }

                
                
    return 0;
}