#include<iostream>
#include<string.h>
using namespace std;

class name{
    int a, b;
    public:

    //constructor ;

    // 1) default constructor
        // name(){  
        //     // a = 1 , b = 2;
        //     cin>>a>>b;
        // }


    // // 2) parameter constructor
        // name(int aa ,int  bb){  
        // //    cout<<"Enter a and b : ";
        // //     cin>>aa>>bb;
        //     a= aa , b= bb;
        // }

    // 3) default parameter constructor
        name(int aa ,int bb = 20 ){  
            a = aa , b = bb;
        }



    void sum(){
        int s = a+b;
        cout<<"Sum: "<<s<<endl;
    }


};          

int main()
{
    int x = 10 , y = 20 ;   // for 2 
    // int x = 10 , y  ;  // for 3 
    // name obj;   //  for 1 
	// name obj(x,y);  // for 2 
	
    name obj(x);   // for 3 

    obj.sum();	 	
                       
    return 0;
}