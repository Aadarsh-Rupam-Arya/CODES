#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
                
                

int main()
{
    int arr[]= {1,4,5};		 	
    int arr1[]= {122,341,90,50,67};

    sort(arr1, arr1+5);

    int mer[8];	

    merge(arr,arr+3 , arr1 , arr1+5 , mer);	 	

    for(int i = 0 ; i < 8 ; i++){
        cout<<mer[i]<<" ";
    } 
    

   
                
    return 0;
}