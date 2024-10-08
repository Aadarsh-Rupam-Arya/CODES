#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
                

int main()
{
    int *ptr = new int[100] ;

    cout<<ptr<<endl;

    delete []ptr;

    int *k = new int[100] ; 

    cout<<ptr<<endl;		 	
    cout<<k;		 	
                
                
    return 0;
}