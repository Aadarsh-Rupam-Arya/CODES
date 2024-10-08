#include<iostream>
#include<string.h>
using namespace std;
                
void default_val(int x , char ch[] , char k[] = "!"  ){

    cout<<x<<" "<<ch<<" "<<k;

}      
void sum(void){
    
}         

int main()
{
    int x = 10 ; 
    char ch[] = "*";
    
    default_val(x , ch ,"#");
    return 0;

}