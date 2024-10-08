#include<iostream>
#include<string.h>
using namespace std;

void sel_sort(int arr[], int n){

for(int i = 0 ; i < n-1 ; i++){
   int minin = i ;  
    for(int j = i+1 ; j < n ; j++ ){
        if(arr[minin]>arr[j]){
            minin = j ;
        }
    }
    swap(arr[minin],arr[i]);
}


}              
                

int main()
{
	 int size ; 
    cout<<"enter no of elem in array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter elems : ";
    for(int i = 0 ; i<size ; i++ ){
        cin>>arr[i];		 	
    }

    // int arr[] = {3,5,2,1,6};
    // int size=sizeof(arr)/ sizeof (arr[0]) ;

    sel_sort(arr,size);
    
    cout<<endl<<"sorted Array: ";
    for(int i = 0 ; i< size ; i++ ){
        cout<<arr[i]<<" ";
    }

	 	
                
                
    return 0;
}