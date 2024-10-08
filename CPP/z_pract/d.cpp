// // // #include<iostream>
// // // #include<string.h>
// // // using namespace std;

// // // void bubble_sort(int arr[], int n ){

// // //     for(int i = 0 ; i<n-1 ; i++){

// // //         int minindex = i ;

// // //         for(int j = i+1 ; j<n ; j++ ){
// // //             if(arr[minindex] == arr[j]){
// // //                 minindex++;
// // //             }   	
// // //             else if{

// // //             }	 	
// // //         }
// // //         swap(arr[minindex],arr[i]);		 	
// // //     }
// // // }         
                

// // // int main()
// // // {
// // //     // cout<<"enter no of elem in array : ";
// // //     // cin>>n;
// // //     int arr[] = {3,5,6,2,25,7};
// // //      int n = 6 ; 
// // //     // cout<<"Enter elems : ";
// // //     for(int i = 0 ; i<n ; i++ ){
// // //         cin>>arr[i];		 	
// // //     }

// // //     bubble_sort(arr,n);
    
// // //     cout<<endl<<"sorted Array: ";
// // //     for(int i = 0 ; i< n ; i++ ){
// // //         cout<<arr[i]<<" ";
// // //     }
	 	
                
                
// // //     return 0;
// // // }


// // #include<iostream>
// // #include<string.h>
// // using namespace std;
                
// // void bubble_sort(string arr[], int n ){
// //     for(int i = 0 ; i < n -1 ; i++){
// //         for(int j = 0 ; j< n-i-1 ; j++){
// //             if (arr[j]>arr[j+1]){
// //                 swap(arr[j],arr[j+1]);
// //                 // int temp  = arr[j];
// //                 // arr[j] = arr[j+1];
// //                 // arr[j+1] = temp ;
                
// //             }
// //         }
// //     }
// // }

// // int main()
// // {

// //     int n ;
// //     string arr[] = {"mango","apple","pear","banana","orchid"};
// //     n = sizeof(arr)/sizeof(arr[0]);
// //     bubble_sort(arr , n );
// //     cout << "sorted array : ";
// //     for(int k = 0 ; k < n ; k++){
// //         cout<<arr[k]<<" ";
// //     }		 	          
// //     return 0;

// // }


// #include<iostream>
// #include<string.h>
// using namespace std;
                
// void bubble(string arr[], int n){
//     for(int i = 0 ; i<n ; i++ ){
//         for(int j = 0 ; j<n-i-1 ; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
        		 	
//     }
// }              

// int main()
// {
//     	int n ;
//         int m ;
//         cout<<"enter: ";
//         cin>>n;
//         string arr[n]; 

//     for(int i = 0 ; i<n; i++ ){
//         cin>>arr[i];         		 	
//     }

//         cout<<"enter: ";
//         cin>>m;

//      string arrn[m]  ;

//     for(int i = 0 ; i<m; i++ ){
//         cin>>arrn[i];         		 	
               		 	
//     }

//         // string arr[] = {"mango","apple","pear","banana","orchid"}; 
//         // string arrn[] = {"pea","guwwa","teak"}; 
//         // int n = sizeof(arr)/sizeof(arr[0]);
//         // int m = sizeof(arrn)/sizeof(arrn[0]);

//         int tot = n + m ;

//         string newarr[tot] ;


//     for(int i = 0 ; i<n; i++ ){
//         newarr[i] = arr[i];         		 	
//     }
//     for(int i = 0 ; i<m; i++ ){
//         newarr[i+n] = arrn[i];         		 	
//     }

//         bubble(newarr, tot);

//         cout << "Arr: ";
//         for (int i = 0; i < tot; i++)
//         {
//             cout<<newarr[i]<<" ";       
//         }
        

                
//     return 0;
// }




#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int sizel, size2;
    cin >> sizel;

    string arr1[sizel];
    for (int i = 0; i < sizel; ++i) {
        cin >> arr1[i];
    }

    cin >> size2;
    string arr2[size2];
    for (int i = 0; i < size2; ++i) {
        cin >> arr2[i];
    }

    // Merge the arrays
    string mergedArray[sizel + size2];
    merge(arr1, arr1 + sizel, arr2, arr2 + size2, mergedArray);

    // Output
    for (int i = 0; i < sizel + size2; ++i) {
        cout << mergedArray[i] << " ";
    }
    cout << endl;

    return 0;
}