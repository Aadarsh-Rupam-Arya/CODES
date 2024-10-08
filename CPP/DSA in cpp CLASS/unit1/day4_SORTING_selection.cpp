#include<iostream>
#include<string.h>
using namespace std;

void selction_sort(int arr[], int n ){

    for(int i = 0 ; i<n-1 ; i++){

        int minindex = i ;

        for(int j = i+1 ; j<n ; j++ ){
            if(arr[minindex] > arr[j]){
                minindex=j;
            }   		 	
        }
        swap(arr[minindex],arr[i]);		 	
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

    selction_sort(arr,n);
    
    cout<<endl<<"sorted Array: ";
    for(int i = 0 ; i< n ; i++ ){
        cout<<arr[i]<<" ";
    }


    
    return 0;
}