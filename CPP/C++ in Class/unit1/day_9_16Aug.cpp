
// friend class ;


#include<iostream>
#include<string.h>
using namespace std;
class frn ;            
class arith{
    int x ;
    int y ;
public:
    int inp(){
        cin>>x;
        cin>>y;
    }
    int  sum(){
        return x+y;
    }
    friend class frn;
}   ;          

class frn {
    public:
    int  mul(arith o){
         return o.x*o.y;
    }
};

int main()
{

    arith obj;

    frn obj1 ;

    obj.inp();
    cout<<"sum: "<<obj.sum()<<endl;
    cout<<"mul: "<<obj1.mul(obj)<<endl;
    		 	
                               
    return 0;
}