#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

class B1
{
private:
    int roll_no;

protected:
    char name[20];

public:

    void get_1data()
    {
        cout << "Enter roll_no: ";
        cin >> roll_no;
    }

    void show_1data()
    {
        cout << "Roll no :  ";
        cout << roll_no << endl;
    }
};

class B2{
    private : 
    char DOB[20];

    protected:
    char address[20];

    public:

    void get_2data()
    {
        cout << "Enter DOB: ";
        cin >> DOB;
    }

    void show_2data()
    {
        cout << "DOB:  ";
        cout << DOB << endl;
    }

};




class Student : protected B1 , protected B2 
{
private:
    

protected:
    char school[20];

public:
    void get_more_data()
    {
        get_1data();     // privately access the data 
        get_2data();

        cout << "Enter name of stu: ";
        cin >> name;

        cout << "Enter Address: ";
        cin >> address;

        cout << "Enter school name: ";
        cin >> school;
    }

    void show__more_data()
    {
        show_1data();
        show_2data();
        cout << "Name : ";
        cout << name << endl;
        cout << "address: ";
        cout << address << endl;
        cout << "school: ";
        cout << school << endl;
    }
};

int main()
{

    Student obj1;
    
    
    obj1.get_more_data();
    obj1.show__more_data();


    return 0;
}