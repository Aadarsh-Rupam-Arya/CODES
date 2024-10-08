#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
                

int main()
{
    
    int *a = NULL;
    int *b = NULL ;

    int *add = NULL;
    int *sub = NULL;
    int *div = NULL;
    int *mul = NULL;
    int *mod = NULL;
    
    a = new int;
    b = new int ;

    add = new int;
    sub = new int;
    div = new int;
    mul = new int;
    mod = new int;

     if(a == NULL || b == NULL || add == NULL || sub == NULL || div == NULL || mul == NULL || mod== NULL)
    {
        cout<<"Memory allocation failed"<<endl;
        exit(1);
    }


    cout<<"Enter A & B : ";
    cin>>*a >> *b;

     *add = *a + *b; 
     *sub = *a - *b;
     *div = *a / *b;
     *mul = *a * *b;
     *mod = *a % *b;

    cout<<"Add: "<<*add<<endl;
    cout<<"sub: "<<*sub<<endl;
    cout<<"div: "<<*div<<endl;
    cout<<"mul: "<<*mul<<endl;
    cout<<"mod: "<<*mod<<endl;
           
                
    return 0;
}