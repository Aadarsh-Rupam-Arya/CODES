// #include<iostream>
// #include<string.h>
// #include<fstream>
// using namespace std;

// class Student{
//    public:
//     string name;
//     int age;
//     int roll;

//     public:


//     void getinfo(){
//         cout<<"Enter name: ";
//         cin>>name;
//         cout<<"Enter age: ";
//         cin>>age;
//         cout<<"Enter roll: ";
//         cin>>roll;
//     }
    
//     void putinfo(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"age: "<<age<<endl;
//         cout<<"Roll: "<<roll<<endl;
//     }

// };               
                

// int main()
// {
//     Student s1,s2;

//     s1.getinfo();

//     fstream fobj;

//     fobj.open("CLASS.txt", ios::out | ios::binary); 	
//     fobj.write((char*)&s1, sizeof(s1));
//     fobj.close();

      
//     fobj.open("CLASS.txt", ios::in | ios::binary); 	
//     fobj.read((char*)&s2, sizeof(s2));
//     s2.putinfo();
//     fobj.close();

//     // fstream ob;


//     return 0;
// }


#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class Student{
   public:
    string name;
    int age;
    int roll;

    // public:


    void getinfo(){
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter age  : ";
        cin>>age;
        cout<<"Enter roll : ";
        cin>>roll;
    }
    
    void putinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"age  : "<<age<<endl;
        cout<<"Roll : "<<roll<<endl;
    }

};               
                

int main()
{
    int no;
    cout<<"Enter no of students: ";
    cin>>no;
    Student s1[no],s2[no];

    fstream fobj;
    fobj.open("CLASS.txt", ios::out| ios::binary); 	
    for(int i = 0 ; i<no ; i++ ){
        cout<<"Enter the details for student "<<i+1<<endl;
        s1[i].getinfo();
        fobj.write((char*)&s1[i], sizeof(s1[i]));
    }
    fobj.close();

      
    fobj.open("CLASS.txt", ios::in | ios::binary); 	
    for(int i = 0 ; i<no ; i++ ){
        fobj.read((char*)&s2[i], sizeof(s2[i]));
        s2[i].putinfo();
    }
    fobj.close();



   return 0 ; 
}




    // fstream fobj;


    // fobj.open("CLASS.txt", ios::app ); 	
    // s1.getinfo();
    
    // fobj<<s1[i].name<<endl;
    // fobj<<s1[i].age<<endl;
    // fobj<<s1[i].roll<<endl;
    
    // fobj.close();

      
    // fobj.open("CLASS.txt", ios::in ); 	
    
    // s2.putinfo();
    // fobj.close();

    // fstream ob;

    // ob.open("CLASS.txt" , ios::app);
    // ob<<"HEllO";
    // ob.close();
                
//     return 0;
// }




