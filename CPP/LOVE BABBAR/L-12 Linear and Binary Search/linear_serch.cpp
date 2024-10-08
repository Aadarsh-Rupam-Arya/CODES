#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int arr[] = {23,5,2,54,3};
int key = 85 ; 
    int size = sizeof(arr)/sizeof(arr[0]);
int f = 0 ; 
    for(int i = 0 ; i<size ; i++){
        if (arr[i]==key ){
            f = i ;
            cout<<"Found" ;            
        }	
        }

    if (f== 0){
        cout<<"not found";
    }

       
    		 	
                
                
    return 0;
}