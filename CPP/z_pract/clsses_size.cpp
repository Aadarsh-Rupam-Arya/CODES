#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
class A {
    int m;
    int aa;
    public:
    void show(){
        cin>>m;
        cout<<m;
    }
};               
                
class K :public A{
    int l;
    public:
    void showi(){
        cin>>l;
        cout<<l;
    }
};               

int main()
{

    A ob;
    K o;

    cout<<"Size of first class: "<<sizeof(ob)<<endl;		 	
    cout<<"Size of second class: "<<sizeof(o)<<endl;		 	
                
                
    return 0;
}