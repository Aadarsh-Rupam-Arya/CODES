#include<iostream>
#include<string.h>
using namespace std;
                
void sortb(string arr[], int n){
    for(int i = 0 ; i < n-1 ; i++){
        for(int j = 0 ; j < n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
        cout<<"Arr after iteration "<<i+1<<" : ";
         for(int i = 0 ; i<n ; i++ ){
            cout<<arr[i]<<" " ;
    }
    cout<<endl;
}
}   

void sorts(string arr[] , int n ){
    for(int i = 0 ; i < n - 1 ; i++){
        int min = i ; 
        for(int j = i+1 ; j < n ; j++){
            if(arr[min]>arr[j]){
                min = j ;
            }
        }
        swap(arr[min],arr[i]);
        cout<<"Arr after iteration "<<i+1<<" : ";
        for(int i = 0 ; i<n ; i++ ){
        cout<<arr[i]<<" " ;
            }
        cout<<endl;
    }
}

int main()
{   
    int n ;
    cin>>n;
    string arr[n];
    for(int i = 0 ; i<n ; i++ ){
        cin >>arr[i] ;
    }
cout<<"Array before sort: ";
    for(int i = 0 ; i<n ; i++ ){
        cout<<arr[i]<<" " ;
    }
    cout<<endl;

    sortb(arr,n);

       cout<<"sorted array: ";         
    for(int i = 0 ; i<n ; i++ ){
        cout<<arr[i]<<" " ;
    }

    


                
    return 0;
}