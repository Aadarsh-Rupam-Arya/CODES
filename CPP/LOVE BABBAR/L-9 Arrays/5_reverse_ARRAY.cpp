#include<iostream>
#include<string.h>
using namespace std;

void reverse(int arr[] , int size ){
    cout<<"Array before reversal\n";

    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nArray after reversal\n";
    for(int i = size-1 ; i >=0 ; i--){
        cout << arr[i]<<" ";
    }
}

int main()
{
    int arr[6] = {3,5,2,6,8,9}	;

    reverse(arr, 6 );



                
                
    return 0;
}