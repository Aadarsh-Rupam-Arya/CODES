#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
class A{

    int a ;

    public:

    virtual void show() = 0 ;

    // virtual void print() = 0 ;
    
    // void disp(){
    //     cout<<"A class disp()"<<endl;
    // }

};    


class B: public A{
    public:

    void show(){
        cout<<"B class show()"<<endl;
    }

    // void disp(){
    //     cout<<"B class disp()"<<endl;
    // }

    // void print(){
    //     cout<<"A class print()"<<endl;
    // }



};

class C: public A{
    public:

    void show(){
        cout<<"C class show()"<<endl;
    }

    // void disp(){
    //     cout<<"C class disp()"<<endl;
    // }



};


int main()
{

    A *aptr;

    B objB;
    C objC;
    // C objC ; // this is not possible as child class should have the function decleration of the pure virtual function

    // aptr = &objB;
    aptr = &objC;

    // aptr->disp();
    aptr->show();

    // B *bptr;
    
    // bptr = &objB;

    // bptr->disp();
    // bptr->show();

    
             

    return 0;
}