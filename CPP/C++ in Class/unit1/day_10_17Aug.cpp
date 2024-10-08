// //reccursion;

// #include<iostream>
// #include<string.h>
// using namespace std;

// int fact(int a){

//     if (a>=1){
//         return a*(fact(a-1));
//     }
//     else{
//     return 1 ;
//     }
// } 

// int sumofn(int a ){
//     int sum= 0 ;
//     sum += sumofn(a-1);

//     return sum;
// }

// int main()
// {
//     int i = 5 ;
//    cout<< fact(i)<<endl;  
//    cout<<sumofn(i)<<endl ;         
//     return 0;
// }




#include<iostream>
#include<string.h>
using namespace std;

void sum(int a, int b)
{
    int c = a + b ;
    cout << "Sum: " << c << endl;
}

void sum(float a, float b)
{
    float c = a + b;
    cout << "Sum: " << c << endl;
}

void sum(char a, char b)
{
    char c = a + b;
    cout << "Sum: " << c << endl;
}

int main()
{
    int a = 10 , b = 20;
    float l = 1.2 , m = 1.5;
    char j = 'J' , k = 'k';

   sum(a,b); 
   sum(l,m); 
   sum(j,k); 
                
                
    return 0;
}

