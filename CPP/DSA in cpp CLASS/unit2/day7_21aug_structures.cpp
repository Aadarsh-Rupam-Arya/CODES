#include<iostream>
#include<string.h>
using namespace std;


struct emp
{
    int id ;
    string name;
    float salary;
};
                
                

int main()
{
    		 	
    struct emp e;

    e.id   =100;
    e.name = "Ram" ;
    e.salary = 2450.50; 

    cout<<"id: "<<e.id<<endl;
    cout<<"name: "<<e.name<<endl;
    cout<<"salary: "<<e.salary<<endl;

    struct emp *p;

    p->id =100;
    p->name = "Ram" ;
    p->salary = 2450.50;             
    cout<<"id: "<<p->id<<endl;
    cout<<"name: "<<p->name<<endl;
    cout<<"salary: "<<p->salary<<endl;
                
    return 0;
}