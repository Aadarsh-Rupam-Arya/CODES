// // #include<iostream>
// // #include<string.h>
// // using namespace std;

// // void arr_disp(int arr[], int n ){
// //     for (int i = 0 ;i <n;i++){
// //         cout<<arr[i]<<" ";
// //     }
// //     cout<<endl;
// // }

// // void selection_sort(int arr[], int n ){
// //     for(int i = 0 ; i< n- 1 ; i++){
// //         int min = i ;
// //         for(int j = i+1 ; j < n ; j++){
// //             if(arr[min]>arr[j]){
// //                 min = j ;
// //                 // swapped = true ;
// //             }
// //         }
// //         if (min != i){
// //         swap(arr[min] , arr[i]);
// //         }

// //         bool sorted = false ;

// //         for(int k = 1 ; k<n ; k++ ){
// //             	if(arr[k] < arr[k-1]){
// //                     sorted = true;
// //                 }	 	
// //         }

// //         // if (!swapped){
// //         //     break;
// //         // }
// //         arr_disp(arr,n);
// //     }
    
// // }

// // void bubble(int arr[] , int n ){
// //     for(int i = 0 ; i<n ; i++ ){
// //         bool swapped = false;
// //         for(int  j = 0 ; j < n- i - 1 ; j++){
// //             if(arr[j] > arr[j+1]){
// //                 swap(arr[j], arr[j+1]);
// //                 swapped = true ;
// //             }
// //         } 	
// //         if(!swapped){
// //             break;
// //         } 

// //         arr_disp(arr,n);

// //     }

// // } 

                

// // int main()
// // {
// //     int arr[6] = {41,64,1,31,79,12};		 	
// //     bubble(arr,6);
// //     cout<<endl<<endl;
// //     int arri[6] = {41,64,1,31,12,79};		 	
// //     selection_sort(arri,6);         
                
// //     return 0;
// // }


// #include<iostream>
// #include<string.h>
// using namespace std;

// void disp(int arr[] , int n ){
//     for(int i = 0 ; i<n ; i++ ){
//         cout<<arr[i]<<" ";		 	
//     }
//     cout<<endl;	
// }

// void sel(int arr[] , int n ){
//     for(int i = 0 ; i < n-1 ; i++ ){
//         int min = i ;
//         for(int j = i + 1 ; j < n ; j++){
//             if(arr[min]>arr[j]){
//                 min = j ;
//             }
//         }
//         swap(arr[min], arr[i]);

//         bool sorted = true;
//         for(int k = 1 ; k < n ; k++){
//             if(arr[k-1] > arr[k]){
//                 sorted = false;
//                 break;
//             }
//         }
//         if(sorted){
//             break;
//         }		 	
//         cout<<"array after iteration "<<i+1<<": ";
//         disp(arr,n);
//     }
// }               

// int main()
// {
//     int arr[6] = {3,4,1,5,6,2};

//     sel(arr,6);

    	
                
                
//     return 0;
// }


#include<iostream>
#include<string.h>
using namespace std;
                
                

int main()
{
    int arr[6] ={2,3,4,11,5,8};

    for(int i = 0 ;  i< 6-1 ; i++){
        int min = i ; 
        for(int j = i+1; j < 6 ; j++ ){
            if(arr[min] > arr[j]){
                min = j ;
            }
        }
            swap(arr[min],arr[i]);
    } 	

      for(int i = 0 ; i< 6 ; i++){
        cout<<arr[i]<<" ";
      }          
                
    return 0;
}