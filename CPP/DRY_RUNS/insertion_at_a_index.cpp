
#include<iostream>
#include<string.h>
#define MAXSIZE 100
using namespace std;
                
void insert_at_index(int arr[], int &size , int elem ,int index){

    for(int i = size ; i > index ; i--){
        arr[i] = arr[i-1];
    }
    arr[index] = elem;
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

    int index ;
    cout<<"Enter endex: ";
    cin>>index;

    insert_at_index(arr,size ,elem,index);		 	
                
     cout<<"array: " ;
     for(int i = 0 ; i < size; i++){
        cout<<arr[i] <<" ";

     }            
    return 0;
}