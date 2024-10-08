#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
                

int main()
{
    float *p = NULL ;		 	
    float *q = NULL ;		 	
    float *r = NULL ;		 	
    float *SI = NULL ;	

    p = new float;	 	
    q = new float;	 	
    r = new float;	 	
    SI = new float;	 

    if(p == NULL || q == NULL || r == NULL || SI == NULL)
    {
        cout<<"Memory allocation failed"<<endl;
        exit(1);
    }

    cout<<"Enter princincipal , rate and time : ";
    cin>>*p>>*q>>*r;	

    *SI = (0.01) * (*p) * (*q) * (*r);

    cout<<"Simple interest : "<<*SI;    

    delete p;
    delete q;
    delete r;
    delete SI;
                
    return 0;
}