#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int a ,temp , ans=0; 
    cin>> a ;

    while (a != 0 ){
      
         
         temp = a %10;
         ans = (ans*10)+temp;
         a /= 10;

        
    }		 
    cout<<ans;	
                
                
    return 0;
}