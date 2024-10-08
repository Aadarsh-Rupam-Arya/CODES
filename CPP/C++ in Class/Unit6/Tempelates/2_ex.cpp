#include<iostream>
#include<string.h>
#include<fstream>
#define MAX 5 
using namespace std;
                
template <typename T>
T sum(T a , T b){
    return a+b;
}   


template <class X>
X sq(X a){
    return (a*a);
}

template <class type>
type sum(type A[])
{
    int tot= 0 ;
    for(int i = 0 ; i< MAX ; i++){
        tot += A[i];
    }
    return tot;
}


int main()
{
    int *arr = new int[MAX];

    for(int i = 0 ; i<MAX ; i++ ){
        cin>>arr[i];		 	
    }  	

    cout<<"Sum of elem in array: "<<sum<int>(arr)<<endl;	 	

              


                
    return 0;
}
