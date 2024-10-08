// // #include<iostream>
// // #include<string.h>
// // using namespace std;

// // int binary_search(int arr[] , int size , int key ){
// //     int start  = 0 ;
// //     int end = size - 1 ;

// //     int mid  = (start + end )/2 ; 
//                 // or
// //   int mid = start + ((end-start)/2);

// //     while (start <= end  ){
// //         if (arr[mid] == key){
// //             return mid ; 
// //         }
// //         if (key > arr[mid]){
// //             start = mid+1 ;
// //         }
// //         else {
// //             end = mid -1 ;
// //         }

// //         mid = start + ((end-start)/2);
// //     }
// //     return -1;

// // }


// // int main()
// // {
    
// //     int arr_even[6] ={16,24,35,46,57,86} ;

// //     int arr_odd[7] ={12,34,45,56,67,86,99} ;
    		 	
// //     // int index = binary_search(arr_even,6,35);
// //     int index = binary_search(arr_odd,7,34);

// //     cout<<"found at index : "<<index;
                
                
// //     return 0;
// // }


// #include<iostream>
// #include<string.h>
// using namespace std;

// int binary_search(int arr[] , int size , int key ){
//     int start  = 0 ;
//     int end = size - 1 ;

//     int mid = start + ((end-start)/2);


//     while (start <= end  ){
//         if (arr[mid] == key){
//             return mid ; 
//         }
//         if (key > arr[mid]){
//             start = mid+1 ;
//         }
//         else {
//             end = mid -1 ;
//         }

//         mid = start + ((end-start)/2);
//     }
//     return -1;

// }


// int main()
// {
//     cout<<"Enter the no of elem in array: ";
//     int n ;
//     cin>> n ;
//     int arr[n];
//     cout<<"Enter elem in sorted way:\n";

//     for(int i = 0 ; i<n ; i++ ){
//         cin >> arr[i];
//     }
//     int key;
//     cout <<"Enter the key to find: ";
//     cin>>key;


//     int index = binary_search(arr,n,key);
//     if(index == -1){
//         cout<<"Elem not found";
//     }  
//     else{          
//     cout<<"found at index : "<<index;
//     }        
//     return 0;
// }


#include<iostream>
#include<string.h>
using namespace std;
int binary_search(int arr[], int n , int key){
    int start = 0 ;
    int end = n - 1 ;
    int mid = start + ((end - start)/2) ;
    while(start <= end){
        if (arr[mid]==key){
            return mid;
        }
        if (arr[mid]<key){
            start = mid + 1 ;
        }
        else{
            end = mid - 1 ;
        }
        mid = start + ((end-start)/2)
        ;
    }
    return -1 ;

}
int main()
{
    cout<<"Enter the no of elem in array: ";
    int n ;
    cin>> n ;
    int arr[n];
    cout<<"Enter elem in sorted way:\n";

    for(int i = 0 ; i<n ; i++ ){
        cin >> arr[i];
    }
    int key;
    cout <<"Enter the key to find: ";
    cin>>key;

 
    int index = binary_search(arr,n,key);
    if(index == -1){
        cout<<"Elem not found";
    }  
    else{          
    cout<<"found at index : "<<index;
    }        
    return 0;
}

