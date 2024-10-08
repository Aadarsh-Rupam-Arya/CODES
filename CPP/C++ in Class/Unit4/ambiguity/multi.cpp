#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class A{
    private:
    int id ;

    protected:
    string name;

    public:
    void get(){
        cout<<"enter id: ";
        cin>>id;
    }
    void show(){
        cout<<id;
    }
    
};

class B{
    private:
    int num;

    protected:
    string dob;

    public:

    void get(){
        cout<<"enter Num: ";
        cin>>num;
    }
    void show(){
        cout<<num;
    }
   
};


class AB : public A,public B{
    private:
    // string name;

    protected:
    string dob;

    public:

   
    
};


int main()
{

    AB obj;

    // obj.get();      // this is an error (ambiguity error)
    // obj.show();         
    obj.A::get();	 	// this wont give an error as we are scoping the thing
    obj.A::show();	 	
                
                
    return 0;
}