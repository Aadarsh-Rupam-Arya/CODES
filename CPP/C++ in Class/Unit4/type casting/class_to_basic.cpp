#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

// here we do with the operator fnc;

class typecasting
{
    int h, m;

public:
    typecasting(int n ,int l)
    {
        h =  n ;
        m =  l ;   
    }

    operator int()
    {
        return 60 * h + m;
    }

    operator float()
    {
        return   h + m / 60.0 ;
    }


};

int main()
{
    int l , m;
    cin>>l >>m; 

    typecasting T1(l,m);
    float n ;
    n = T1;
    
    
    cout<<"Total time in hours : "<<n;
    return 0;
}


