// #include<iostream>
// #include<string.h>
// using namespace std;

// void bubble_sort(int arr[], int n ){

//     for(int i = 0 ; i<n-1 ; i++){

//         int minindex = i ;

//         for(int j = i+1 ; j<n ; j++ ){
//             if(arr[minindex] == arr[j]){
//                 minindex++;
//             }   	
//             else if{

//             }	 	
//         }
//         swap(arr[minindex],arr[i]);		 	
//     }
// }         
                

// int main()
// {
//     // cout<<"enter no of elem in array : ";
//     // cin>>n;
//     int arr[] = {3,5,6,2,25,7};
//      int n = 6 ; 
//     // cout<<"Enter elems : ";
//     for(int i = 0 ; i<n ; i++ ){
//         cin>>arr[i];		 	
//     }

//     bubble_sort(arr,n);
    
//     cout<<endl<<"sorted Array: ";
//     for(int i = 0 ; i< n ; i++ ){
//         cout<<arr[i]<<" ";
//     }
	 	
                
                
//     return 0;
// }


#include<iostream>
#include<string.h>
using namespace std;
                
void bubble_sort(int arr[], int n ){
    for(int i = 0 ; i < n -1 ; i++){
        for(int j = 0 ; j< n-i-1 ; j++){
            if (arr[j]>arr[j+1]){
                // swap(arr[j],arr[j+1]);
                int temp  = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp ;
                
            }
        }
    }
}

int main()
{

    int n ;
    int arr[] = {2,3,13,30,6,8};
    n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr , n );
    cout << "sorted array : ";
    for(int k = 0 ; k < n ; k++){
        cout<<arr[k]<<" ";
    }		 	          
    return 0;

}






