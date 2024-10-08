// #include<iostream>
// #include<string.h>
// #include<fstream>
// using namespace std;

// class A {
//     int x ;
//     public:
    

//     A(){
        
//         cout<<"Calling default Constructor of base class."<<endl;
//     }
    
//     A(int a ){
//         x=a ;
//         cout<<"Calling parametrised Constructor of base class. x:"<<x<<endl;
//     }
    
//     ~A(){
//         cout<<"Destructor called of base class"<<endl;
//     }


// };

// class B : public A{
//     int l;
//     public:
//     B(): A(){
//         cout<<"Calling default Constructor of derived class."<<endl;
//     }

//     B(int p): A(p){
//         l = p ;
//         cout<<"Calling parametrised Constructor of derived class. l:"<<l<<endl;
//     }

//     ~B(){
//         cout<<"Destructor called of derived class"<<endl;
//     }
// };
                

// int main()
// {
    
//     B obj1;
//     B obj2(1);
	 	
                
                
//     return 0;
// }



#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                

class A {
    int a;
    int b ;
    public:
    A(int x ,  int y ){
        a = x ;
        b = y ;
    }
    void show(){
        cout<<"A: "<<a<<endl;
        cout<<"B: "<<b<<endl;
    }
};

class B : public virtual A{
    
    public:
    
    void show(){
        cout<<"CLass B show func"<<endl;
    }
    
};

class C : public virtual A{
    
    public:
    
    void show(){
        cout<<"CLass C show func"<<endl;
    }
    
};



int main()
{
    A o(1,2);
                
                
    return 0;
}