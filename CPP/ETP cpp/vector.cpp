#include<iostream>
#include<string.h>
#include<fstream>
#include<vector>
using namespace std;
                
                

int main()
{   
    vector<int> v ;

    cout<<"size=>"<<v.size()<<endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout<<"size=>"<<v.size()<<endl;

   cout<< v.at(1);
                
                
    return 0;
}