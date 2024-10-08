#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class A {
    int a ;
    public:
    A(){
        cout<<"Constructor called of base class"<<endl;
    }
    
    ~A(){
        cout<<"Destructor called of base class"<<endl;
    }


};

class B : public A{
    public:
    B(): A(){
        cout<<"Constructor called of derived class"<<endl;
    }

    ~B(){
        cout<<"Destructor called of derived class"<<endl;
    }
};
                

int main()
{
    B obj;

    		 	
                
                
    return 0;
}