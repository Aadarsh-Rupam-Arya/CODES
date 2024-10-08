#include<iostream>
#include<string.h>
using namespace std;

struct employee
{
    int emp_id, age ,salary , mobile_num   ;
    char emp_name[25] , qualification[10] ;  
    public:
    
       void emp_details_entry(){
       
        cout<< "Enter the employee Id: ";
        cin.ignore();
        cin>>emp_id;
        cout<<"Enter the name: ";
        cin.ignore();
        cin.getline(emp_name,30);
        cout<<"Enter the age: ";
        cin.ignore();
        cin>>age; 
        cin.ignore();
        cout<<"Enter mobile num: ";
        cin>>mobile_num;
        cin.ignore();
        cout<<"Enter the salary: ";
        cin>>salary;
        cout<<"Qualification: ";
        cin.ignore();
        cin.getline(qualification,30);

    }

    void emp_details_show(){
        cout<<"Employee Details : \n";
    cout<<"\t---------------------------------------------------------------\n";
        cout<<"\t|1> ID:               | "<< emp_id<<endl;
        cout<<"\t|2> Name:             | "<< emp_name<<endl;
        cout<<"\t|3> Age:              | "<<age<<endl;
        cout<<"\t|4> Mob Num:          | "<<mobile_num<<endl;
        cout<<"\t|5> Salary:           |  "<<salary<<endl;
        cout<<"\t|6> Qualification:    | "<<qualification<<endl;
    cout<<"\t---------------------------------------------------------------\n";

    }
}emp;

int main()
{
     employee  emp;
     
    int num_of_emp;
    cout<<"Enter the no of employees: ";
    cin>>num_of_emp;

    employee emp[num_of_emp];

    for (int i = 0 ; i < num_of_emp ; i++){
        emp[i].emp_details_entry();
        cout<<"Emp details:"<<endl;
        emp[i].emp_details_show();
    }
             
                
    return 0;
}

// #include <iostream>
// #include <string.h>
// using namespace std;

// // struct employee
// union employee
// {
//     char name[25];
//     int age;
//     float salary;
// };
// int main()
// {
//     employee e1[5];

//     for (int i = 0; i <= 5; i++)

//     {
//         cout << "Enter the name: ";
//         cin.ignore();
//         cin.getline(e1[i].name, 30);
//         cout << "Name: " << e1[i].name << endl;
//         cout << "Enter the age: ";
//         cin  >> e1[i].age;
//         cout << "Age: " << e1[i].age << endl;
//         cout << "Enter the salary: ";
//         cin  >> e1[i].salary;
//         cout << "Salary: " << e1[i].salary << endl;
    
//         // cout << "Name: " << e1[i].name << endl;
//         // cout << "Age: " << e1[i].age << endl;
//         // cout << "Salary: " << e1[i].salary << endl;

//     }
    
//     return 0;
// }
