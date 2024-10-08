#include<iostream>
#include<string.h>
using namespace std;
struct emp{

};                
                

int main()
{
    struct emp i2 ;

    int a = 10 ;
    int *ptr = &a;

    cout<<"Adress of 'ptr' : "<<ptr <<endl;
    cout<<"Value of ptr : "<<*ptr <<endl;

    int **pp  = &ptr;  // for stortin the value of the pointer we use the double pointer varible;

    cout<<"Adress of the pointer 'prt' : " <<pp<<endl;
    cout<<"Value of the pointer 'prt' : " <<**pp<<endl;


                
                
    return 0;
}