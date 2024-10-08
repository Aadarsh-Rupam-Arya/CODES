#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

void bubble(int arr[], int n ){
    for(int i = 0 ; i< n ; i++){
        for(int j = 0 ; j< n - i - 1 ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}       

void printarray(int arr[], int n){
    for(int i = 0 ; i<n ; i++ ){
        cout<<arr[i]<<" ";		 	
    }
    cout<<endl;
}                

int main()
{
    int arr[] = {3,5,2,6,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    printarray(arr,len);
    bubble(arr,len);	
    printarray(arr,len); 

    
                
                
    return 0;
}