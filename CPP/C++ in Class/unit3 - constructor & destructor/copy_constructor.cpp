#include<iostream>
#include<string.h>
using namespace std;

class sample{
    int a , b ;
    public:

    sample(int x, int y){
        a = x ;
        b = y ;        
    }

    sample(sample &obj){
        a = obj.a;
        b = obj.b;
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
        cout<<"\nwe are editing the values: \n";
        int x , y ;
        cout<<"Enter new the a and b values : \n";
        cin>>x>>y;
        a = x ; 
        b = y ;
          cout<<"The new value of a is : "<<a<<endl;
        cout<<"The new value of b is : "<<b<<endl;
    }


    void disp(){
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is : "<<b<<endl;
    }

};               
                

int main()
{
    sample obj1(10,20);  // here we are creating the obj1 ;

    cout<<"obj1:"<<endl;
    obj1.disp() ;

    cout<<"obj2:"<<endl;
    sample obj2(obj1);   // here we are calling with the obj1 as parameter;

    // cout<<"obj2:"<<endl;
    // obj2.disp() ;

    // sample obj3 = obj1 ;  // this is also a way to call the coppy constructor

    // cout<<"obj3:"<<endl;
    // obj3.disp();




                
                
    return 0;
}

