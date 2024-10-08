#include<iostream>
#include<string.h>
#include <fstream>
using namespace std;
                
                

int main()
{
    ifstream fout;

    cout<<"The data before: ";
    string str ;
    
    fout.open("appending.txt");
        fout>>str;
        fout.close();
           
    cout<<str<<endl;

    ofstream fin;

    fin.open("appending.txt",ios::app);
    string k ;
    fin<<"\n";
    fin<<"This is the appended data";
    fin.close(); 


    ifstream gl;

    char s ;

    gl.open("appendin.txt");

    cout<<"The data after append: "; 

    gl>>s;
    gl>>s;
    gl.close();
           
    cout<<s;       
                
    return 0;
}