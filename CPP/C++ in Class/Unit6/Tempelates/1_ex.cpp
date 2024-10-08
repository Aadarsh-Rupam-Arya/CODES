#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
template <typename T>
T sum(T a , T b){
    return a+b;
}   


template <class X>
X sq(X a){
    return (a*a);
}



int main()
{
    int num1 = 3 ;

    cout<<"square: "<<sq<int>(num1)<<endl;
    cout<<"square: "<<sq<float>(2.56)<<endl;

    cout<<"Sum: "<<sum<int>(2,3)<<endl;
    cout<<"Sum: "<<sum<float>(2,3.4)<<endl;

     		 	
                
                
    return 0;
}