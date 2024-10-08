#include<iostream>
#include<string.h>
using namespace std;

void selection_sorting(int arr[],int n ){
    for(int i = 0 ; i < n-1 ; i++){
        int minindex = i ;
        for(int j = i+1; j< n ; j++ ){
            if(arr[j] < arr[minindex])
                minindex = j ;
              		 	
        }
        swap(arr[minindex], arr[i]);
    }

}

int main()
{
   int arr[] = {34,3,32,4,2,21};
    cout<<"New array after sort: ";
    int size = sizeof(arr)/sizeof(arr[0]);
    selection_sorting(arr , size);
    for(int i = 0 ; i<size ; i++ ){
        	cout<<arr[i]<<" ";	
    }
 
    return 0;
}