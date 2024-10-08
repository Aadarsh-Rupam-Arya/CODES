// Quick sort

#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
int partition(int arr[] , int p , int r){
    int pivot = arr[r];
    int i = p-1 ;
    for(int j = p ; j < r ; j++ ){
        	if(arr[j]<=pivot){
                i++;
                swap(arr[j],arr[i]);
            }	 	
    }
    swap(arr[r],arr[i+1]);
    return i+1;
}
void Quicksort(int arr[], int p , int r){
    if(p<r){
        int q = partition(arr,p,r);
        Quicksort(arr,p,q-1);
        Quicksort(arr,q+1,r);
    }
    
}        

int main()
{
    int n ;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<"Orignal array: ";

    for(int i = 0 ; i<n ; i++ ){
        cout<< arr[i]<<" ";		 	
    }

    Quicksort(arr , 0 , n-1);

    cout<<"\nSorted array: ";
    for(int i = 0 ; i<n ; i++ ){
        cout<< arr[i]<<" ";		 	
    }

    return 0;
}


