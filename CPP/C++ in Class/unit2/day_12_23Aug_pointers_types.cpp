#include<iostream>
#include<string.h>
using namespace std;
                
                

int main()
{
    // void pointer ;
{
    // int a = 10 ;
    // void *ptr = &a ;
    // cout<<ptr<<endl; 
    // // cout<<*ptr; // this will show an error as it is not typedefined;
    // cout<<*(int*)ptr<<endl;
}
    // NULL pointer
{
    // int a  = 10 ;
    // int *ptr = NULL;
    // cout<<ptr;  // the address will be "0";
}           
    // dangeling pointer
{
    // int *ptr;
    // {
    // int a  = 10 ;
    // ptr = &a;
    // cout<<"inside ad :"<<ptr<<endl;
    // cout<<"inside vl :"<<*ptr<<endl;
    // }
    // cout<<"outside ad :"<<ptr<<endl;  // though ptr is intilised inside the block but the adress is being stored outside also
    // cout<<"outside vl :"<<*ptr<<endl;
}
    // wild pointer
{
    // int a = 10 ; 
    // int *ptr ;
    // cout<<*ptr;
}
    // constant pointer
{
    // int a = 6 ; 
    // const int b = 3;

    // int *ptr;
    // const int *p ;

    // p = &a ;
    // cout <<p ;


  

}


    return 0;
}