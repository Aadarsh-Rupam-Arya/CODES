#include<iostream>
#include<string.h>
using namespace std;

void arr_disp(int arr[], int n ){
    for (int i = 0 ;i <n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubble(int arr[] , int n ){
    for(int i = 0 ; i<n ; i++ ){
        bool swapped = false;
        for(int  j = 0 ; j < n- i - 1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true ;
            }
        } 	
        if(!swapped){
            break;
        } 

        arr_disp(arr,n);

    }

} 


                

int main()
{
    int arr[6] = {41,64,1,3,79,32};		 	

    bubble(arr,6);         
                
    return 0;
}