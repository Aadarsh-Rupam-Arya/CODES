#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
int fact(int n ){
    if(n == 1 || n == 0){
        return 1;
    }
    else{
        return (n * fact(n-1) );
    } 
}



int main()
{ 
    // int *ptr=  new int[n];

    // for(int i = 0 ; i< n ; i++){
    //     cin>>ptr[i];
    // }

    // for(int i = 0 ; i< n ; i++){
    //     cout<<ptr[i]<<" ";
    // }

    // int *fact = new int;
    // *fact = 1 ;
    // int i  = 0 ;

    int n ; 
    cin>>n;

    int *num = new int ;

    *num = n ;

    cout<<fact(*num);

                    
    return 0;

}


