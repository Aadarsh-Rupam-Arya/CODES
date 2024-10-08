#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
                

int main()
{
    double *arr;
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;

    arr = new double[n] ;

    cout<<"Enter the elem of array: ";
    for(int i = 0 ; i< n ; i++){
        cin>>arr[i];
    }

    int key ;
    cin>>key;

    for(int i = 0 ; i< n ; i++){
        if(arr[i]  == key){
            cout<<"Elem found at index : "<<i;
            break;
        }

    }


                
                
    return 0;
}