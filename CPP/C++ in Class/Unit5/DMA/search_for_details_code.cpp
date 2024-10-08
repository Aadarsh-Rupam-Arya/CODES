#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

class Stu
{
    int roll;
    string name;

public:
public:
    void inp()
    {
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter name: ";
        cin >> name;
    }
    void show()
    {
        cout << "Roll: ";
        cout << roll << endl;
        cout << "Name: ";
        cout << name << endl;
    }

    int id()
    {
        return roll;
    }
};

int main()
{
    int n;
    cout << "Enter no of stu: ";
    cin >> n;
    Stu *p = new Stu[n];
    Stu *m = p;
    Stu *d = p;

    for (int i = 0; i < n; i++)
    {
        p->inp();
        p++;
    }

    int reg;
    cout << "Enter roll whose data you need: ";
    cin >> reg;
    int f = 0;

    for (int i = 0; i < n; i++)
    {
        if (reg == m->id())
        {
            cout << "The details of roll no " << reg << " is : \n";
            m->show();
            f = 1;
            break;
        }
        m++;
    }

    if (f == 0)
    {
        cout << "Data not present." << endl;
    }

    delete[] d;

    return 0;
}