#include<iostream>
using namespace std;
int main()
{
    int a=123;
    cout << a << endl;
    double b=999.9999;
    cout << b << endl;

    int size= sizeof(a);
    int zeb= sizeof(b);


    cout << "the size of a is: "<< size<< endl;
    cout << "the size of b is: "<< zeb<< endl;
    
} 