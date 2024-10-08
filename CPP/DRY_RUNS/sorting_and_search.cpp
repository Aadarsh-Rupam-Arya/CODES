#include<iostream>
#include<string.h>
using namespace std;
                
 void sel_sort(int arr[] , int n ){
    for(int i = 0 ; i < n-1 ; i++){
        int minindex = i ;
        for (int  j = i+1; j < n; j++)
        {
            if(arr[minindex]>arr[j]){
                minindex = j ;
            }
        }
        swap(arr[i] , arr[minindex]) ;
    }
 } 

void bubble_sort(int arr[], int n ){
    for(int i = 1 ; i< n-1 ; i++){
        for(int j = 0 ; j< n-i-1 ;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}



void arr_disp(int arr[] , int n ){
    for(int i = 0 ; i<n ; i++ ){
        cout<<arr[i]<<" ";
        		 	
    }
}

int bin_serch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start / 2);
    int flag = 0;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
            // flag = 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
         mid = start + (end - start / 2);
        
    }

    return -1;
}








int main()
{
		int arr[] = { 54,3 , 4, 22 , 1 ,45, 211};
        int n = sizeof(arr)/sizeof(arr[0]) ;
        sel_sort(arr,n);
        // bubble_sort(arr,n);
        int key = 3;
        cout<<"after sort: ";
        arr_disp(arr,n) ;

    int index =   bin_serch(arr,n,key);
if(index == -1){
cout<<"\nElem not found";}
else{
   cout<< "\nfound at: "<<index;
}



                
                
    return 0;
}