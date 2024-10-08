#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class school{
    private:
        int roll_no;
    protected:
        string name;
    public:
        void get1(){
            cout<<"Enter roll no: ";
            cin>>roll_no;
        }
        void show1(){
            cout<<"Roll no: ";
            cout<<roll_no<<endl;
        }     
};   

class A : public school{
    private:
        int age;
    protected:
        string name;
    public:
        void get2(){
            cout<<"Enter age: ";
            cin>>age;
        }
        void show2(){
            cout<<"age: ";
            cout<<age<<endl;
        }     
};  

class B: public school{
    private:
        int num;
    protected:
        string name;
    public:
        void get3(){
            cout<<"Enter mob no: ";
            cin>>num;
        }
        void show3(){
            cout<<"mobile no: ";
            cout<<num<<endl;
        }     
}; 



                

int main()
{
    A obj1;
    B obj2;		 	

    obj1.get1();
    obj1.get2(); 

    obj1.show1();
    obj1.show2();            
      
    obj1.get1();
    obj1.get2();

    obj1.show1();
    obj1.show2();            
                
    return 0;
}