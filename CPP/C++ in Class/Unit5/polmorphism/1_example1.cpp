#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
class BC{
    public:

    void printBC(){
        cout<<"BASE CLASS"<<endl;
    }
    
    void show(){
        cout<<"show() of base class"<<endl;
    }

};

class DC : public BC{
    public:

    void printDC(){
        cout<<"DERIVED CLASS"<<endl;
    }

    void show(){
        cout<<"show() of derived class"<<endl;
    }

};


int main()
{

    // use of Base class pointer for base class ;  
    BC *bptr ;
    BC baseobj;   // for base obj;

    
        
        bptr = &baseobj;
        
            bptr->printBC();
            bptr->show();   // this will call the base class memeber
                   
        DC derivedobj;    // for derived obj
        bptr = &derivedobj;
        
            // bptr->printDC();  // This is an error;

            bptr->show();   // this will also call the base classs member


    cout<<endl;
    

    // use of derived class pointer

    DC *dptr;
  
    dptr = &derivedobj;

        dptr->printDC();
        dptr->show();
        dptr->printBC();    // this is accessed as it is inherited by the derived class

    cout<<endl;

    // we do can do typecasting for accesing members of derived through the base pointer

    ((DC*)bptr)->show();

    ((DC*)bptr)->printDC();


    //dptr = &baseobj;  // this is an error ;









                
    return 0;
}


