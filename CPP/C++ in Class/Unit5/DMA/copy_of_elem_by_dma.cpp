#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

void copy(int *n, int *k){
        *k = *n ;
        cout<<"K: "<<*k<<endl;
               
}               
                

int main()
{
    int *n = new int ;

    int *k = new int ;

    // cout<<"Add n:"<<n<<endl;
    // cout<<"Add k:"<<k<<endl;

    cout<<"Enter data of n: ";
    cin>>*n ;
    
    copy(n , k);
             
    return 0;
}