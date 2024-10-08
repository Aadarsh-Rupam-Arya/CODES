//INsertion sort

#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

void insertionsort(int arr[] , int n ){
    for(int i = 0 ; i<n ; i++ ){
        int elem = arr[i];
        int j =  i -1 ;
        while(j>=0 &&  arr[j]>elem){
            arr[j+1] = arr[j];
            j--;
        }
    arr[j+1] = elem;
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
     int arr[5] = {3,5,2,4,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    printarray(arr,len);
    insertionsort(arr,len);	
    printarray(arr,len); 
		 	
                
                
    return 0;


}



// void bub(int arr[] , int n ){
//     for(int i = 0 ; i<n ; i++ ){
//         for(int j = 0 ; j<n-i-1 ; j++ ){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             } 		 
//         }   		 	
//     }
// }


// void sel(int arr[] ,int n){
//     for(int i = 0 ; i< n -1 ; i++){
//         int min = i ;
//         for(int j = i+1 ; j<n ; j++ ){
//             if(arr[min]>arr[j]){
//                 min = j ;
//             }		 	
//         }
//         swap(arr[min], arr[i]);
//     }
// }

// void ins(int arr[], int n ){
//     for(int i = 0 ; i< n ; i++){
//         int elem = arr[i];
//         int j = i - 1;
//         while(j >= 0 && arr[j]>elem){
//             arr[j+1] = arr[j];
//             j--; 
//         }
//         arr[j+1] = elem;
//     }
// }
