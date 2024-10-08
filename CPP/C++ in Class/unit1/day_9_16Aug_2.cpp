
//function calling ;


#include<iostream>
#include<string.h>
using namespace std;

int swap_point(int *x , int *y){
    int temp = *x ;
    *x = *y ;
    *y = temp ;
} 

int swap_ref(int &x , int &y ){
    int temp = x ;
    x = y ;
    y = temp ;
}     



              

int main()
{
    		 	
    int a = 10 , b = 20  ;

    cout<<"Before swap  A: "<<a<<" B: "<<b<<endl; 
    // swap_point(&a,&b);
    swap_ref(a, b);
    cout<<"After swap  A: "<<a<<" B: "<<b; 

                
    return 0;
}