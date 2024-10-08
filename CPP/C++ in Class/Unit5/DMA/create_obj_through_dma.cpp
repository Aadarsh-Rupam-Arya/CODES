#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
class Stu{
    int roll ;
    string name ; 

    public:
    void inp(){
        cout<<"Enter roll: ";
        cin>>roll;
        cout<<"Enter name: ";
        cin>>name;
    }
    void show(){
        cout<<"Roll: ";
        cout<<roll<<endl;
        cout<<"Name: ";
        cout<<name<<endl;
    }
    
};


int main()
{
    int n;
    cout<<"Enter no of stu: ";
    cin>>n;
    Stu *p = new Stu[n];
    Stu *m = p;
    Stu *d = p;

    for(int i = 0 ; i<n ; i++ ){
        p->inp();	
        p++; 	
    }
    for(int i = 0 ; i<n ; i++ ){
        m->show();
        m++;		 	
    }

    

  
    delete []d;
    

                
                
    return 0;
}