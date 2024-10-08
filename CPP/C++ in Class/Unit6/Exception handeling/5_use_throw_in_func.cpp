#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
void devide(int x , int y){
    if( y == 0){
        throw y,'j';
        throw 'j',y;
    }
    else{
        cout<<"Divison: "<<x / y<<endl;
    }
}          

int main()
{

    try{
        devide(10 , 5);	 	
        devide(10 , 0);
    }	 	
    catch(int k){
        cout<<"Caught exception for int"<<endl;
    }
    catch(char k){
        cout<<"Caught exception for char"<<endl;
    }
                

                
    return 0;
}