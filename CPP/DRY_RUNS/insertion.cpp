#include<iostream>
#include<string.h>
using namespace std;
                
void ins_end(int arr[], int &n,int elem ){
    arr[n]=elem;
    n++;
}               
void ins_begin(int a[], int &n,int elem ){
  int i ;
    // for(int i = n-1 ; i>=0 ; i--){
    //     arr[i+1] = arr[i]; 
    // }
    // arr[0] = elem;
    // n++;
    for(i=n-1;i>=0;i--)
    a[i + 1] = a[i];
    a[0] = elem;
    n++;
}               
void ins_index(int arr[], int n ,int index){

}               

int main()
{
    // cin>>n ;
    int arr[] = {3,5,1,63,2,7,78};
    // for(int i = 0 ; i<n ; i++ ){
    //     cin>>arr[i];		 	
    // }

    int n  = sizeof(arr)/sizeof(arr[0]);
    int elem ;
    cout<<"enter elem: ";
    cin>>elem;

    // ins_end(arr, n , elem);
    ins_begin(arr, n , elem);

    for(int i = 0 ; i<n ; i++ ){
        cout<<arr[i]<<" ";		 	
    }

  
    
    
    		 	
                
                
    return 0;
}