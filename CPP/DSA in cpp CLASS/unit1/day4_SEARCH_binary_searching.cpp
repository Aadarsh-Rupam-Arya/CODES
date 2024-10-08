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

int binary_search(int arr[], int n , int key){
    int start = 0;
    int end = n ;
    int mid = start + (end - start)/2;
    int flag = 0;
    while(start<=end){
       if(arr[mid]==key){
        cout<<"Elem found at index: "<<mid;
        flag = 1 ;
        break;
        }
        else if(arr[mid] < key ){
            start = mid + 1 ;
        }
        else{
            end = mid -1 ;
        }
        mid = start+(end-start)/2;
    }
    if (flag== 0){
        cout<< "Element not found";
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
        cout<<endl<<"sorted_ Array: ";
    for(int i = 0 ; i< n ; i++ ){
        cout<<arr[i]<<" ";
    }
    int key ;
    cout<<endl<<"enter the elem to search : ";
    cin>>key;

    binary_search(arr,n , key);

    return 0;
}