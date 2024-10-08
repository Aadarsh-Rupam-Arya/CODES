//opening a file Using the member function open() of the class
//writing in file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
        
    ofstream fout;

    fout.open("country.txt");
    fout<<"India\n";
    fout<<"USA\n";
    fout<<"UK\n";
    fout.close();
    fout.open("capital.txt");
    fout<<"Delhi\n";
    fout<<"Washington\n";
    fout<<"Londan\n";
    fout.close();

}

