#include<iostream>
#include<string.h>
#include <iomanip>
using namespace std;
                
                

int main()
{
    int a  = 5;
    int *p = &a;

    float k  = 5.5;
    float *i = &k;

    char ch = 'k';
    char *c = &ch;

    // cout<<"Size : "<<sizeof(p)<<endl;
    // cout<<"Size : "<<sizeof(i)<<endl;
    // cout<<"Size : "<<sizeof(cp)<<endl;

   
    // // cout<<"Adress: "<<p<<endl;
    // cout<<"Value: "<<*p<<endl;
  
    // cout<<"Adress: "<<i<<endl;
    // cout<<"Value: "<<*i<<endl;
  
    cout<<"Adress: "<<c<<endl;
    cout<<"Value: "<<*c<<endl;



 // arithmetic operations ;

//  cout<<"increment i.e : ++p : "<<++p<<endl;
//  cout<<"increment i.e : ++i : "<<++i<<endl;
//  cout<<"increment i.e : ++cp : "<<++cp<<endl;


//     int arr[] = {2,3,4};

// int n =3  ;
//     int *ptr = arr;

    // cout<<*ptr<<endl;
    // cout<<*++ptr<<endl;
    // cout<<*++ptr<<endl;
    
    // for(int i = 0 ; i<n ; i++ ){
    //     cout<<"add: "<<ptr<<endl;
    //     cout<<"val: "<<*ptr<<endl;
    //     ptr++;		 	
    // }
    
                
    return 0;
}