#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;


class base{
    public:

    base(){
        cout<<"Base class Constructor\n";
    }
    //  ~base(){
    //     cout<<"Base class Destructor\n";   // due to this the derived class destructor isn't called so we use 
    // }                                      // we use " virtual " keyword ;
    virtual ~base(){
        cout<<"Base class Destructor\n";      // by using virtual keyword the derived class destructor is also called
    }

};

class derived : public base{
    public:

    derived(){
        cout<<"Derived class Constructor\n";
    }
    ~derived(){
        cout<<"Derived class Destructor\n";
    }

};
                
int main()
{
    base *obj = new derived;
   
    delete obj;

    return 0;
}