#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int arr[5] = {3,5,7,2,6};
    int size = sizeof(arr)/sizeof(int);
 int  max = arr[0] , min  = arr[0];
    for(int i = 0 ; i < size ; i++ ){
        if(max<arr[i]){
        max=arr[i];
        }
        if(min>arr[i]){
        min=arr[i];
        }
    }
    cout<<max<<endl;          
    cout<<min;          
    return 0;
}