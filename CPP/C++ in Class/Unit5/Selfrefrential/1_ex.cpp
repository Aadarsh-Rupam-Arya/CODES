#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;


class A{
    public:
    int a ;
    A *next;

    void get(A *obj, int x){
        obj->a = x;
        obj->next = obj; 
    }
    
};



int main()
{
    A o1 , o2 , o3 ;

    o2.get(&o1,1);
    // o1.get(&o1,1);
    
    cout<<o1.a<<endl;
    cout<<o1.next<<endl;

                
                
    return 0;
}