// #include<iostream>
// #include<string.h>
// using namespace std;

// void dn(int arr[] , int size){
//     for(int i = 0 ; i< size; i++ ){
//         cout<<arr[i]<<" ";		
//     }
// }           

// int main()
// {
//     int n;
//     cin>>n;

// int arr[n];
// for(int i = 0 ; i<n ; i++ ){
//     	cin>>arr[i];	 	
// }

//     // int arr[]  = {1,2,3,4,5};
//     // int abh[]  = {4,5};

//     // int size = sizeof(arr)/sizeof(arr[0]);
//     // int size1 = sizeof(abh)/sizeof(abh[0]);
    
//     // int size = 5;
//     // int size1 = 2;
    
//     dn(arr, n);
//     cout<<endl;
//     // dn(abh,size1);

    	 	
                
                
//     return 0;
// }



#include<iostream>
#include<string.h>
using namespace std;

void fn(int arr[],int n ){
 
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}               
                

int main()
{
    int arr[5] = {1,2};
    int arr1[5] = {1,2,3,4,5};

    fn(arr,2);
    cout<<endl;
    fn(arr1,5);
                
                
    return 0;
}