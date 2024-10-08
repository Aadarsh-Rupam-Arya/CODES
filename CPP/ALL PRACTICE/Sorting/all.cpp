#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;



// void printarray(int arr[], int n){
//     for(int i = 0 ; i<n ; i++ ){
//         cout<<arr[i]<<" ";		 	
//     }
//     cout<<endl;
// }       


void printu(int arr[] , int n){
    for(int i = 0 ; i<n ; i++ ){
        cout<<arr[i]<<" ";		 	
    }
    cout<<endl;
}

// void bubble(int arr[] , int n ){
//     for(int i = 0 ; i<n ; i++ ){
//         for(int j = 0 ; j<n-i-1 ; j++ ){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }		 	
//         }		 	
//     }
// }

// void insertion(int arr[] , int n){
//     for(int i = 0 ; i< n ; i++){
//         int elem  = arr[i];
//         int j = i -1 ;
//         while(j >= 0 && arr[j]> elem){
//            arr[j+1] = arr[j]; 
//            j--;
//         }
//         arr[j+1] = elem;
        
//     }
// }

// void selection(int arr[],int n){
//     for(int i = 0; i<n-1 ; i++){
//         int min = i ;
//         for(int j = i+1 ; j<n ; j++ ){
//             if(arr[min]>arr[j]){
//                 min = j ;
//             }
//         }
//         swap(arr[min], arr[i]);
//     }
// }


// void bubble(int arr[], int n){
//     for(int i = 0 ; i<n; i++ ){
//         for(int j = 0 ; j<n-i-1 ; j++ ){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
// }


// void insertion(int arr[],int n){
//     for(int i = 0 ; i<n; i++ ){
//         int elem = arr[i];
//         int j = i -1 ;
//         while(j >= 0 && arr[j]>elem){
//             arr[j+1] =arr[j];
//             j--; 
//         }   
//         swap(arr[j+1],elem)	;	 	
//     }
// }


// void selection(int arr[],int n ){
//     for(int i = 0 ; i<n-1; i++ ){
//         int min = i ;
//         for(int j = i+1 ; j<n ; j++ ){
//             if(arr[min]>arr[j]){
//                 min = j ;
//             }		 	
//         }
//         swap(arr[i], arr[min]);
//     }
// }

void bubble(int arr[], int n){
    for(int i = 0 ; i<n ; i++ ){
        for(int j = 0 ; j<n-i-1 ; j++ ){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }		 	
        }		 	
    }
}


void insertion(int arr[],int n){
    for(int i = 0 ; i<n ; i++ ){
        int elem = arr[i];
        int j  = i -1 ;
        while(j >= 0 && arr[j]>elem){
            arr[j+1] = arr[j];
            j--;
        } 		
        swap(arr[j+1] , elem); 	
    }
}


void selection(int arr[],int n ){
    for(int i = 0 ; i<n-1 ; i++ ){
        int min = i ;
        for(int j = i+1 ; j<n ; j++ ){
            if(arr[min]>arr[j]){
                min = j ;
            }
        }
        swap(arr[i],arr[min]);
    }
}



                

int  main()
{
   
    int arr[] = {3,5,2,4,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    printu(arr,len);
    // bubble(arr,len);
    // insertion(arr,len);	
    // selection(arr,len);
    printu(arr,len); 
       
    return 0;
}