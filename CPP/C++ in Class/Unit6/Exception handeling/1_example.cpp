#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
                

int main()
{
    int i ;

    cin>>i;

    int m = i ;

    try{

        if(m != 0){
            cout<<"m is not 0"<<endl;
        }

        else{
            throw(m);
        }
    }

    catch(int k){
        cout<<"Exception recived : m = "<<m<<endl;
    }
    cout<<"End"<<endl;
    		 	
                                
    return 0;
}