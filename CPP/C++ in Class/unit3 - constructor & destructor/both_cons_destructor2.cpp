#include<iostream>
#include<string.h>
using namespace std;

// destructor (~) we use like constructor but we use the tiddle (~) sign t oshow it as a destructor ;

class A{
    int a , b ;
    public:

    A(){
        "Hello welcome : \n"; 
    }
    A(int a , int b){
        cout<<"Average " ;
    }

    ~A(){
        
        cout<<"After destructor The value of a : "<<a<<endl;
    }

    void show(){
        cout<<"After constructor The value of a : "<<a<<endl;
    }


};


int main()
{
    A obj1 , obj2, obj3;
    obj1.show();
    // A obj2;
    obj2.show();
    // A obj3;
    obj3.show();
     		 	
                
                
    return 0;
}