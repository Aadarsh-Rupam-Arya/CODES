#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
                

int main()
{
    int *ptr = NULL ;

    cout<<ptr;   // Here the value of addresss will become 0 since address for NULL == 0 ;

    // ptr = new float ;   // this is an error since in any datatype-  ptr we cant store othere datatype - ptr;

    ptr = new int ;     // Dynamically alloting the memory 

    cout<<ptr;   // this will give the address of the memory which is been alloted;

    delete ptr ;   // this is to delete the memory which ptr is pointing towards;  


    return 0;
}