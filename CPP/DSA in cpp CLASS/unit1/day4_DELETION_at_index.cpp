#include<iostream>
#include<string.h>
#define MAXSIZE 100
using namespace std;


void delete_at_index(int arr[], int &n, int index ){
   
   for(int i = index ; i<=n ; i++ ){
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

    int index ;
    cout<<"Enter the index at which you want to delete: ";
    cin>>index;

    delete_at_index(arr,n,index);



  cout<<"array after deletion: ";
    for(int i = 0 ; i<n ; i++ ){
        cout<<arr[i]<<" ";		 	
    }

           
    return 0;
}