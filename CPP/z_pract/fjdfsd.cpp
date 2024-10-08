#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
class student{
    private:
    int num;
    protected:
    string name;
    public:
    void get1(){
        cout<<"Enter num: ";
        cin>>num;
    }
    void show1(){
        cout<<"Num: "<<num;
    }
}; 

class d: protected student{
    public:
    void know(){
        get1();
        show1();
    }
};

class k: protected d{
    public:
    void know(){
        get1();
        show1();
    }
};

int main()
{
    k obj;
    // d o;
    // o.get1();
    // obj.get1();

    obj.know();
                
                
    return 0;
}