#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class Compare{
    int x ;
    public:
    Compare (int a){
        x = a ;
    }

    void operator>(Compare o){
        if(x>o.x){
            cout<<"obj1 is greater\n";
        }
        else{
            cout<<"obj2 is greater\n";  
        }
    } 
    friend void operator!=(Compare , Compare);

   
} ;

void operator!=(Compare ob1 , Compare ob2){
    if(ob1.x == ob2.x){
        cout<<"obj1 & obj2 are equal\n";
    }
    else{
        cout<<"obj1 & obj2 are not equal\n";
    }
}
                
int main()
{
    

    Compare o1(110) , o2(20) ;
    // o1.operator>(o2);
    o1>o2;
    // operator!=(o1,o2);
    o1!=o2; 	
           
    return 0;
}
      
