#include<iostream>
#include<string.h>
using namespace std;

void linear_search(int arr[], int n , int key){
int index = 0 ;
    for(int i = 0 ; i<n ; i++ ){
        if(arr[i]==key){
            index =  1 ;
            cout<<"Elem found! at index: "<<i;
            break ;
        }		 	
    }
    if (index == 0){
        cout<<"Elem not found";
    }
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
    int key ;
    cout<<"enter the elem to search : ";

    cin>>key;

    linear_search(arr,n , key);

     return 0;
}