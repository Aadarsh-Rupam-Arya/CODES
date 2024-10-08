#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                

void check(int x){

    try{
        if(x == 0 ){
            throw x;
        }
        else if(x == 1){
            throw x;
        }
        else if(x== 2){
            throw 1.0;
        }
        else{
            cout<<"No error"<<endl;
        }
    }
    
    catch(...){         // ... this keyword is used for universal type
        cout<<"Exception caught"<<endl;
    }
    
}

int main()
{

    check(0);	 	
    check(1);	 	
    check(2);	 	
    check(3);	 	
                       
    return 0;
}