#include<iostream>
#include<string.h>
using namespace std;

bool isprime(int n ){

    for(int i = 2 ; i<n ; i++){
        if (n%i == 0 ){
            return  0;
        }
    }
    return 1 ;


}

int main()
{
    int n ;
    cin>>n;

    if (isprime(n)){
        cout<<"Is a prime no\n";
    }    		 	
    else{
        cout<<"Not a prime no\n";
    }
                
                
    return 0;
}