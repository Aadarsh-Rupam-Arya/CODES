#include<iostream>
#include<string.h>
#define MAXSIZE 100
using namespace std;


void delete_first(int arr[], int &n ){
   
   for(int i = 0 ; i<=n ; i++ ){
        arr[i] = arr[i+1]; 	
   }
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
// cout<<endl;
// cout<<sizeof(arr)<<endl;
    delete_first(arr,n);
// cout<<sizeof(arr)<<endl;
// cout<<endl;


  cout<<"array after deletion: ";
    for(int i = 0 ; i<n ; i++ ){
        cout<<arr[i]<<" ";		 	
    }

           
    return 0;
}