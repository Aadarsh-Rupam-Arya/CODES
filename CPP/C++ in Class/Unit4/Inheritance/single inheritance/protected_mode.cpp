#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

class employee
{
private:
    int emp_id;

protected:
    char name[20];


public:
    void get_data()
    {
        cout << "Enter emp_id: ";
        cin >> emp_id;
    }

    void show_data()
    {
        cout << "Emp_id: ";
        cout << emp_id << endl;
    }
};

class details : protected employee
{
private:
    int salary;

protected:
    char dept[20];

public:

    void get_more_data()
    {
        get_data();          // we can now access the member functions only in the class not directly in main

        cout << "Enter emp name: ";
        cin >> name;

        cout << "Enter dept name: ";
        cin >> dept;
    }

    void show__more_data()
    {
        show_data();
        cout << "Name: ";
        cout << name << endl;
        cout << "Dept: ";
        cout << dept << endl;
    }
};



int main()
{

    details obj1;

    

    // obj1.get_data();   // this will give an error since int protected mode every elem becomes protected
    
    obj1.get_more_data();
    obj1.show__more_data();

    return 0;
}