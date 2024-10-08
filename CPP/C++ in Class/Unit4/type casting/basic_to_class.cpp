#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

// here we do with the constructor;

class typecasting{
    int n ;
    int h , m ;
    public:

    

    // typecasting(){
    //     cin>>n; 
    // }

    typecasting(int n){
        h = n/60;
        m = n%60;
    }

    void show_data(){
        cout<<"Hrs: "<<h<<" Min: "<<m<<endl;
    }


};
                

int main()
{
    int n ;
    cin>>n;

    typecasting T1(n);

    T1.show_data();

    		 	         
    return 0;
}