#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                

class empdet{
    public:
    string user_id ;
    string name ;
    string pass ;

    void get(){
        cout<<"Enter emplyee name: ";
        cin>>name;
        cout<<"Enter user id: ";
        cin>>user_id ;   
        cout<<"Enter password: ";
        cin>>pass;
    }
    
};


int main()
{

    empdet o;
    
    // o.get();

    fstream  file ;

    file.open("op.txt");

    file<<"hii";



    


                
    return 0;
}