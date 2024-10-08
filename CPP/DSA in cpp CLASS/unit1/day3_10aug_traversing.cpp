#include<iostream>
#include<string.h>
#define MAXSIZE 100
using namespace std;

int a[MAXSIZE];
int n , i ;


void create_arr(){
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter "<<n<<" no of elems: ";
    for( i = 0 ; i< n  ; i++ ){
        cin>>a[i];        		 	
    }
    cout<<"The array is : ";
    for( i = 0 ; i< n  ; i++ ){
        cout<<a[i]<<" ";        		 	
    }
    cout<<"\nArray in reverse: ";
    for(int i = n-1 ; i>=0 ; i-- ){
        cout<<a[i]<<" ";
     		 	
    }
}
                

int main()
{

    create_arr();

                
                
    return 0;
}