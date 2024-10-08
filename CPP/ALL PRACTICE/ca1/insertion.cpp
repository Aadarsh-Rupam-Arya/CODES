#include<iostream>
#include<string.h>
using namespace std;
                
                

int main()
{
    int n= 3 ;
    // cin>>n; 
    int arr[n] = {1,2,3};
    int elem = 23 ;
    for(int i = 0 ; i < n ; i++){
        arr[n] = elem ;
    }	
    n++;
    for(int i  =0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    } 
    n++;
    int elemo = 344 ;
    for(int  i = n-1 ; i >=0 ; i--){
        arr[i] = arr[i-1];
    }	
    arr[0] = elemo;
    cout<<endl;
    for(int i  =0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    } 
int  uu = 333333;  
    int index = 3 ;
    n++; 
    for(int i = n-1 ; i>= index ; i--){
        arr[i] = arr[i-1];
    }
    arr[index] = uu;
    cout<<endl;
    for(int i = 0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }

                    
                
    return 0;
}