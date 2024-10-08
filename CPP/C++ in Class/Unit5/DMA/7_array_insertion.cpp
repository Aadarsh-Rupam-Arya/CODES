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

    int elem;
    cout<<"Enter the elem to insert: ";
    cin>>elem;

    int poss ;
    cout<<"Enter the poss to insert: ";
    cin>>poss;
    n++;
    for(int i = n-1 ; i>= poss ; i++){
            
            arr[i+1] =  arr[i];
    }

    arr[poss] = elem; 


    for(int i = 0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }

                
                
    return 0;
}