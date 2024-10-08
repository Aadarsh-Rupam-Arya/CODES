#include<iostream>
#include<string.h>
using namespace std;
int power(int a , int b){
    int ans = 1 ;

    for(int i = 1 ; i<=b; i++ ){
        ans = ans * a ;
    }
    return ans;
}

int main()
{
    		 	
        int a = 4 , b = 3 ;
        cout<<power(a,b);
                
                
    return 0;
}