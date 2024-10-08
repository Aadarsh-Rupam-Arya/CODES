#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
                

int main()
{

    string str[5] = {"Hell","hot","rat","tom","well"} ; 
    float k[5] = {23.1 , 42.1, 56.4 , 76.3 , 64.22};
    string sl = "HELLO THIS"; 

    ofstream out;
    
    out.open("new.txt");
    out.write((char*)str,sizeof(str));   // passing the string array 
    out.write((char*)k,sizeof(k));      // passing the int array
    out.write((char*)&sl,sizeof(sl));  // passing the string     [here we have to provide the address-&] 
    out.close();

    string s[5] ; 
    float m[5] ; 
    string ol; 

    ifstream in;
    
    in.open("new.txt");
    in.read((char*)s,sizeof(s));       
    in.read((char*)m,sizeof(m));
    in.read((char*)&ol,sizeof(s));
    in.close();


    for(int i =0 ; i< 5 ; i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;

    for(int i =0 ; i< 5 ; i++){
        cout<<m[i]<<" ";
    }
    cout<<endl;

    cout<<ol<<endl;


    
                
                
    return 0;
}