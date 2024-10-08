// #include<iostream>
// #include <fstream>
// #include<string.h>
// using namespace std;
                
                

// int main()
// {
    
//     int n =100 ;

//     char ch[n];
                
//     ifstream fin ;

//     fin.open("country.txt");
//     while(fin){
//         fin.getline(ch,n);
//         cout<<endl<<endl<<ch;
//     }
//     fin.close();

//     fin.open("capital.txt");

//     while(fin){
//         fin.getline(ch,n);
//         cout<<endl<<endl<<ch;
//     }

//     fin.close();
        
//     return 0;
// }


//opening a file Using the member function open() of the class
//Reading from file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{

    ofstream fout;
    
    fout.open("country.txt");
    
        int k ;
        cout<<"Enter the no of countries: "; 
        cin>>k;

        string con ;
        for(int i = 0 ; i < k ; i ++){
            cout<<"Enter country "<<i+1<<" name: ";
            cin>>con;
            fout<<con<<endl;
        }

        fout.close();


    const int n=80;
    char s[n];

    ifstream fin;

        fin.open("country.txt");
        
        while(fin)
        {
        fin.getline(s,n);
        cout<<s<<endl;
        }
        fin.close();

    // fin.open("capital.txt");
    // while(fin)
    // {
    // fin.getline(s,n);
    // cout<<s<<endl;
    // }
    // fin.close();


    ifstream f;
    
    
  


}