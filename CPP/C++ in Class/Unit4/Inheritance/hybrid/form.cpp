#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
class a{
    private:
    int num;
    protected:
    // string name;
    public:
    void get1(){
        cout<<"Enter num: ";
        cin>>num;
    }
    void show1(){
        cout<<"Num: "<<num;
    }
}; 


class b: protected a{
    private:
    string name;
    protected:
    // string DOB;
    
    public:
    // void 
    
};




class c {
    
    private:
    string DOB;

    public:

    void get4(){
        cout<<"Enter DOB: ";
        cin>>DOB;
    }
    void show4(){
        cout<<"Dob: "<<DOB<<endl;
        
    }    
    
};

class d:protected b {

    public:
        void to()
        {
            get1();
            show1();
        }
};

int main()
{
   c obj;
   
//    obj.get1();
//    obj.show1();


    // obj.to();
                
                
    return 0;
}