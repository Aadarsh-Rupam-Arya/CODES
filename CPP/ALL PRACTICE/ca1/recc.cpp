#include<iostream>
#include<string.h>
using namespace std;

int fib(int i){
    if(i == 0 ){
        return i ;
    }
    if(i == 1){
        return i;
    }
    else{
        return (fib(i-1) + fib(i-2));
    }
}

int fact(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        return (n*fact(n-1));
    }
}
               
                

int main()
{
    		 	
    // cout<<fact(4);          

    for(int i  = 0 ; i< 7 ; i++){
        cout<<fib(i)<<" ";
    }         
                
    return 0;
}