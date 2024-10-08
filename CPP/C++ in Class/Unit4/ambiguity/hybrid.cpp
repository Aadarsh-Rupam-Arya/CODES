#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

class M
{

private:
    int id;

protected:
    string name;

public:
    void get()
    {
        cout << "enter id: ";
        cin >> id;
    }
    void show()
    {
        cout << id;
    }
};

class A : public  M
{
private:
    int note;

protected:
    string name;

public:
    void get()
    {
        cout << "enter note: ";
        cin >> note;
    }
    void show()
    {
        cout << note;
    }
};

class B : public  M
{
private:
    int num;

protected:
    string dob;

public:
    void get()
    {
        cout << "enter Num: ";
        cin >> num;
    }
    void show()
    {
        cout << num;
    }
};

class AB : public A, public B
{
private:
    // string name;

protected:
    string dob;

public:
};

int main()
{

    AB obj;

    // obj.get();
    // obj.show();
    obj.M::get();
    obj.M::show();

    return 0;
}