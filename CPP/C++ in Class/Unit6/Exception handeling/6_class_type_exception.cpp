#include<iostream>
#include<string.h>
#include<fstream>
#include <conio.h>
using namespace std;


class error{
    int err_c; 
    char *err_d;

    public:

    error(int r , char *d){
        err_c = r ;
        err_d = new char[strlen(d)];
        strcpy(err_d , d); 
    }

    ~error(){
        cout << "destructor";
    }

    void err_disp(void){
        cout<<"Error code : "<<err_c<<endl;
        cout<<"Error discrption : "<<err_d<<endl;
    }

    
};
                

int main()
{

   try{
    cout<<"Enter any key: ";
    getch();
    cout<<endl;
    throw error(99 , "Hero");
   }
   catch(error e){
    cout<<"Exception caught succesfully"<<endl;
    e.err_disp();
   }

    // getch();

    return 0;
}