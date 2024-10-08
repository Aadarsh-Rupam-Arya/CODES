#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;


class stu{
    int n ;

    public:

    stu(int m){
        n = m ;
    }

    void error(){
        if(n == 0){
            throw n;
        }
        else{
            cout<<"No error";
        }
    }

};


int main()
{
    stu obj(0) ;		 	

    try{
        // obj.error();
        throw (stu(1));
    }            
    catch(...){
        cout<<"Error with the input"<<endl;
    }
                
    return 0;
}