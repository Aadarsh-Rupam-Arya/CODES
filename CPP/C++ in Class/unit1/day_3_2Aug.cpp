#include<iostream>
using namespace std;


class student{
    int roll ;
    char name[1];
    char dept[50];
    float marks ;
    
    public:
    void entry (){
        cout<< "Enter roll no : ";
        cin>>roll;
        cout<< "Enter name of student : ";
        cin.ignore();
        cin.getline(name,50);
        cout<< "Enter name of dept : ";
        cin.ignore();
        cin.getline(dept,50);
        cout<< "Enter marks in 10th : ";
        cin>>marks;

    }
    void show(){

        cout<< "Roll.no of student: "<< roll<<endl;
        cout<< "Name of student: "<< name<<endl;
        cout<< "Dept of student: "<< dept<<endl;
        cout<< "Marks of student: "<< marks<<endl;

    }


};


int main()
{
   
int k ;
cout<< "Enter the no of students : ";

cin >> k ;

    student s1[k];

    for (int i = 1 ; i<=k ; i++){
        cout<< "Enter the details of s1["<< i <<"] student: \n" ; 
        s1[i].entry();
    }

    for (int i = 1 ; i <= k ; i++ ){
        cout << "The detals of students are : \n" ;
        s1[i].show();
    }

    cout<< sizeof(s1);


    return 0;
}


