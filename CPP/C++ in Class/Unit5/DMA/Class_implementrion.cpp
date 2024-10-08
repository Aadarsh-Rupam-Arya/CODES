#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
class student{ 
    string *name = new string;
    int *roll = new int;

    public: 

    void get(){
        cout<<"Name: ";
        cin>>*name;
        cout<<"Roll no: ";
        cin>>*roll;
    }
    void show(){
        cout<<"Name: "<<*name<<endl;
        cout<<"Roll no: "<<*roll<<endl;
    }

    void *deleteadd(){
        
        delete name;
        delete roll;
        cout<<"Elements add deleted succesfully."<<endl;
    }
};            

int main()
{   
    
    student  *obj = new student;

    obj->get();                
    obj->show(); 
    obj->deleteadd();
    // obj.get();                
    obj->show();               
                
    return 0;
}



// #include<iostream>
// #include<string.h>
// #include<fstream>
// using namespace std;
                
                

// int main()
// {
//     int * n = new int ;
//     cin>>*n ;

//     cout<<*n<<endl;

//     cout<<"add: "<<n<<endl;
//     cout<<"val: "<<*n<<endl;

//     delete n ;

//     cout<<"add: "<<n<<endl;
//     cout<<"val: "<<*n<<endl;
    
                
                
//     return 0;
// }