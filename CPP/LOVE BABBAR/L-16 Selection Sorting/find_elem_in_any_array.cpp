#include<iostream>
#include<string.h>
using namespace std;

void selection_sort(int arr[], int n ){
    for(int i= 0 ; i < n-1 ; i++){
        int minIndex = i ;
        for(int j = i+1 ; j < n ; j++){
            if(arr[minIndex]>arr[j]){
                minIndex =j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}

int bin_search(int arr[] , int size , int key ){
    int start = 0 ; 
    int end = size - 1 ;
    int mid = start + ((end - start)/2 );
    while (start<= end){
        if(arr[mid] == key){
            return mid ; 
        }
        else if(key > arr[mid]) {
            start = mid + 1 ;
        }
        else{
            end = mid - 1 ;
        }
        mid = start + ((end - start)/2 );
        }
    return -1 ;
}


int main()
{
    int size ; 
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    for(int i = 0 ; i<size ; i++ ){
        cin>>arr[i];
    }	
    cout<<"The array is : ";
    for(int i = 0 ; i<size ; i++ ){
        cout<<arr[i]<<" ";
    }	
    cout<<endl;
    cout<<"Array in sorted form: ";
    
    selection_sort(arr,size);

    for(int i = 0 ; i<size ; i++ ){
        cout<<arr[i]<<" ";
    }	

    cout<<endl;
    int key ;
    
    cout<<"Enter the element you want to find: ";
    cin>>key;

   int index =  bin_search(arr,size,key);

    if (index == -1 ){
        cout << "Element not found" << endl;
    }
    else{
        cout <<"Element Found at position "<< index << endl;
    }   
    return 0;
}