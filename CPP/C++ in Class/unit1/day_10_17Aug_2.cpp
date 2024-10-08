// function overloading 
  
   // without class 

// #include<iostream>
// #include<string.h>
// using namespace std;
                
// int sum(int);              
// int sum(int , int );              
// int sum(float);              

// int main()
// {
//     cout<<sum(5)<<endl;
//     cout<<sum(5,7)<<endl;
//     cout<<sum(5.2)<<endl;
    		 	
                
                
//     return 0;
// }

// int sum(int a){
//     return a+a;
// }              
// int sum(int a , int b){
//     return a+b;
// }              
// int sum(float a){
//     return a+a;
// }            


// with class;

#include<iostream>
#include<string.h>
using namespace std;
                
class arith {
  public:  
int sum(int a){
    return a+a;
}              
int sum(int a , int b){
    return a+b;
}              
int sum(double a){
    return a+a;
}            

} ;             

int main()
{
arith obj;
cout << obj.sum(5) << endl;
cout << obj.sum(5, 7) << endl;
cout << obj.sum(5.2) << endl;

return 0;
}