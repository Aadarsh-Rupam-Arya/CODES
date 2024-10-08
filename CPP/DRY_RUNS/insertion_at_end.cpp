// logic 1 : 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[6],  elem;
//     cout<<"Enter 5 Array Elements: ";
//     for(int i=0; i<5; i++)
//         cin>>arr[i];
//     cout<<"\nEnter Element to Insert: ";
//     cin>>elem;

//     arr[i] = elem;
//     cout<<"\nThe New Array is:\n";
//     for(int i=0; i<6; i++)
//         cout<<arr[i]<<"  ";
//     cout<<endl;
//     return 0;
// }


// logic 2 :


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


// logic 3 : 

#include<iostream>
#include<string.h>
#define MAXSIZE 100
using namespace std;
                
void insert_end(int arr[] , int &size , int elem){

    arr[size] = elem;
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


    insert_end(arr,size ,elem);

// cout<<"size: "<<size;

    for(int i = 0 ; i < size ; ++i ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int elem1;
    cin>>elem1;
       
    insert_end(arr,size ,elem1);
    for(int i = 0 ; i < size ; ++i ){
        cout<<arr[i]<<" ";
    }           
    return 0;
}