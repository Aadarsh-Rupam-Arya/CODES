#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
// opening the file using the constructor method               

int main()
{
    string name ;
    int roll;

    ofstream obj("file.txt");
    cout<<"Enter name: ";
    // getline(cin,name);
    cin>>name;
    cout<<"Enter roll no: ";
    cin>>roll;

    obj<<name;
    obj<<endl;
    obj<<roll;
    obj.close();

    cout<<"Data saved. hee.... heee.... heee......";  

    cout<<"Your data in the file :\n";

    string sl;
    int n ;
    ifstream out("file.txt");
    out>>sl;
    out>>n;
    cout<<endl<<sl;
    cout<<endl<<n;
    out.close();





    return 0;
}