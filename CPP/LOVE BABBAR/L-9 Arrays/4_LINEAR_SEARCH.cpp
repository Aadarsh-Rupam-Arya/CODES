#include<iostream>
#include<string.h>
using namespace std;

bool search(int arr[] , int size , int key){
    
    for(int i = 0 ; i < size ; i++){
        if (arr[i] == key ){
            return 1;
            }
    }
    return 0 ; 
}

int main()
{

    int arr[5] = {34,21,5,2,1};

    int key ;
    cin>>key ; 
    int size = 5 ;


    bool found = search(arr , size , key );

    if (found) {
        cout<<"Found";
    }
    else{
        cout<<"NOt found";

    }

    
    


        
                
    return 0;
}