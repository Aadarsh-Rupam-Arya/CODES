#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

void lins(int arr[] , int n ,int elem){
    for(int i = 0 ; i<n ; i++ ){
        if(arr[i] == elem){
            cout<<i;
        }		 	
    }
}             

void bins(int arr[] , int n , int el){
    int s = 0 ;
    int e = n - 1 ;

    int m = s + (e - s )/2;

    int f = -1 ;

    while(s <= e ){
        if(arr[m] == el){
            cout<<m;
            f = m ;
            break;
        }
        else if(arr[m] < el){
            s = m + 1 ;
        }
        else{
            e = m - 1;
        }
        m = s + (e -s )/2;
    }

    if(f == -1 ){
        cout<<"Not found";
    }

}



int main()
{
    int arr[] = {0,1,2,3,4,5};

    int n = 6 ;

    int elem ;
    cin>>elem;

    // lins(arr,n , elem); 		 	
    bins(arr,n , elem); 		 	
                
                
    return 0;
}