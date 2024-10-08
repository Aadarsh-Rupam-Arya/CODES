#include<iostream>
using namespace std;

int main()
{
   



  
   
   
// print the nums

    // cout << "YOur number is : " << a ;
    //     cout << endl ;

    // cout << "YOur number is : " << b ;
    //     cout << endl ;

    // cout << "YOur number is : " << c ;
    //     cout << endl ;


    // cout <<"The sum of the num is : " << a+b+c ;

    
// Greates num 

//    if (a>b && a>c)
//     {
//         cout<< "Greatest is a: "<<a; 
//     }
//     else if (b>>c && b>a)
//     {
//         cout<< "Greatest is b: "<<b; 
//     }
//     else{
//         cout<< "Greatest is c: "<<c;
    // }
    

//   int sum=0 ;
// for (int i = 0; i <= a; i++) {

//     sum = sum+i;
  
// }
//   co;ut  << "sum is : "<< sum ;

int   a,  r , rev=0, temp;
  cout << "Enter a number a: " ;
    cin >> a;
     temp = a;
    while(a>0)
    {
        r = a%10;
        rev = (rev*10)+r;
        a = a/10;
}
 if (temp==rev)
    {
        cout<< "it is panindrom";
    }

    else{
        cout<< "not panindrom ";
    }
}

