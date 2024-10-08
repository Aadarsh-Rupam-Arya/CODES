#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class A{
    public:

    void prfA(){
        cout<<"A class"<<endl;
    }
    virtual void show(){
        cout<<"A class show()"<<endl;
    }

};

class B : public A{
    public:

    void prfB(){
        cout<<"B class"<<endl;
    }
    void show(){
        cout<<"B class show()"<<endl;
    }

    virtual void disp(){
        cout<<"B class disp()"<<endl;
    }


};
class C: public B{
    public:

    void prfC(){
        cout<<"C class"<<endl;
    }
    void show(){
        cout<<"C class show()"<<endl;
    }

    void disp(){
        cout<<"C class disp()"<<endl;
    }

    

};
                

int main()
{

    // A class 

    A *aptr;
    A objA;
    B objB;
    C objC;


    aptr = &objA;

    aptr->prfA();
    aptr->show();

    aptr = &objB;

    //aptr->prfB();  // this is an error
    aptr->show();


    aptr = &objC;

    aptr->show();

    B *bptr;
    bptr = &objB;

    bptr->disp();

    bptr = &objC;

    bptr->disp();



    



                
                
    return 0;
}