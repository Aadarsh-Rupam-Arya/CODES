#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
class color{
    // public : 
        int num ;
        int l ;
        string  color_name ;
    
    public:

    color(){
        l = -1 ;
    }
    
    void get(){
        num= 1;
        color_name = "red";
    }

    void disp(){
        cout<<"L: "<<l<<endl;
        cout<<"Num: "<<num<<endl;
        cout<<"Color name: "<<color_name<<endl;
    }

} ;             

int main()
{
    color obj0;
    // color obj1;
    // color obj2;
    


    obj0.get();
    obj0.disp();
    // obj1.disp();

                
                
    return 0;
}