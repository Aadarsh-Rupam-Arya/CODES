#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int fibo(int n ){
    if (n==0 || n==1){
        return n ;
    }
    else{
        return (fibo(n-1)+fibo(n-2));
    }
}

int main()
{
    int a = 5 ;

   for (int i=0 ; i<a ; i++){

    printf("%d ",fibo(i));
   
   }
                
                
    return 0;
}