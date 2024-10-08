#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                

void check(int x){

    try{
        if(x == 0 ){
            throw 'x' ;
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

    catch(char i){
        cout<<"Exception caught"<<endl;
    }
    catch(int i){
        cout<<"Exception caught"<<endl;
    }
    catch(double i){
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