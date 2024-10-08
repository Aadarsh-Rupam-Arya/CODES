// Selection sort

#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
void selection(int arr[] , int n){
    for(int i = 0 ; i< n-1 ; i++){  
        int min = i;
        for(int j = i+1 ; j< n ; j++ ){
            if(arr[min]>arr[j]){
                min = j ;
            }
        }
        swap(arr[min] , arr[i]);
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
     int arr[5] = {3,5,2,6,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    printarray(arr,len);
    selection(arr,len);	
    printarray(arr,len); 
		 	
                
                
    return 0;
}