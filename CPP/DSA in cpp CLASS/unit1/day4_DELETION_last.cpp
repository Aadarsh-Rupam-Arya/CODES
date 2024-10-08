#include<iostream>
#include<string.h>
#define MAXSIZE 100
using namespace std;

void delete_last(int arr[] , int &n){
    arr[n-1] = 0 ;
    n--;
}             
                
int main()
{
    int n ; 
    cout<<"enter no of elem in array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elems : ";
    for(int i = 0 ; i<n ; i++ ){
        cin>>arr[i];		 	
    }

    delete_last(arr,n);
    
  cout<<"array after deletion: ";
    for(int i = 0 ; i<n ; i++ ){
        cout<<arr[i]<<" ";		 	
    }

    return 0;
}