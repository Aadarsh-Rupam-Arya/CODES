#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

int i ;

class Section{
    private:
    int *roll;
    string *name;
    int *marks;
    int *n ;

    public:

    Section();

    void show(){ 
        for(i = 0 ; i<*n ; i++ ){
            cout<<"Roll of student "<<i+1<<" : "<<roll[i]<<endl;		 	
            cout<<"Name of student "<<i+1<<" : "<<name[i]<<endl;		 	
            cout<<"Mark of student "<<i+1<<" : "<<marks[i]<<endl;		 	
        }
        cout<<endl;
    }

    ~Section();
};

Section :: ~Section(){
        delete []roll;
        delete []name;
        delete []marks;
        delete n ;
        cout<<"Memory deleted also\n";

    }


Section :: Section(){
        n = new int;
        cout<<"Enter the no of students in section: ";
        cin>>*n ;

        // roll = new int[*n];
        // name = new string[*n];
        // marks = new int[*n];
        roll = new int;
        name = new string;
        marks = new int;

        for(int i = 0 ; i< *n ; i++){
            cout<<"Enter roll for student "<<i+1<<" : ";
            cin>>*roll;
            cout<<"Enter name for student "<<i+1<<" : ";
            cin>>*name;
            cout<<"Enter mark for student "<<i+1<<" : ";
            cin>>*marks;
        }
    
    }


int main()
{

    int *sec = new int;
    cout<<"Enter no of sections : ";
    cin>>*sec;
    cout<<endl;
    Section *obj = new Section[*sec];

    for(i = 0 ; i < *sec ; i++){
        cout<<"The details of section "<<i+1<<" : "<<endl;
        obj->show();
    }
    

    delete []obj;	 	
                
                
    return 0;
}



