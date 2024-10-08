// #include<iostream>
// #include<string.h>
// using namespace std;
                
                

// int main()
// {
//     int n  ;
//     cin>>n;
//     int arr[n];
//     for(int i = 0 ; i < n ; i++){
//         cin>>arr[i];
//     }


//     int newsize = n+1;
//     int new_array[newsize];


//     for(int i = 0 ; i < newsize ; i++){
//         new_array[i] = arr[i];
//     }

//     int elem ;
//     cin>>elem ; 
//     new_array[n] = elem ;
//     for(int j = 0 ; j< n+1 ; j++){
//         cout<<new_array[j]<<" ";

//     }
    
            
//     return 0;
// }


#include<iostream>
#include<string.h>
#define MAXSIZE 100
using namespace std;
                
void insert_start(int arr[], int &size , int elem ){
    for(int i = size ; i > 0 ; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = elem;
    ++size;
}                

int main()
{
    int size , arr[MAXSIZE] , elem ;
    cout<<"Size: ";	
    cin>>size;
    cout<<"enter "<<size<<" elem for array ";

    for(int i = 0 ; i < size ; ++i ){
        cin>>arr[i];
    }
    cout<<"element : ";
    cin>>elem;


    insert_start(arr,size ,elem);		 	
                
     cout<<"array: " ;
     for(int i = 0 ; i < size; i++){
        cout<<arr[i] <<" ";

     }
cout<<endl;
   
    return 0;
}