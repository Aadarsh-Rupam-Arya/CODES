#include<iostream>
#include<string.h>
#include<fstream>
#define MAXSIZE 100
using namespace std;



class Stack{
    int arr[MAXSIZE];
    int top ;

    public:
    Stack(){
        top = -1;
    }

    void push(int x){
        if(top == MAXSIZE-1){
            cout<<"Stack overflow."<<endl;
        }
        else{
            top++;
            arr[top] = x ;
            cout<<"Elem inserted. => "<<x<<endl;
        }
    }

    void pop(){
        int t;
        if(top==-1){
            cout<<"Stack underflow."<<endl;
        }
        else{
            t = arr[top];
            top--;
            cout<<"Element Poped. => "<<t<<endl;
        }
    
    }

    void display(){
        cout<<"Stack: ";
        for(int i = 0 ; i< top+1 ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void get_top(){
        cout<<"Top elem: "<<arr[top];
    }
  
};              

int main()
{
    Stack s;
    s.push(1);		 	
    s.push(2);		 	
    s.push(3);		 	
    s.push(4);		 	
    s.push(5);
    s.pop();	 	
              
    s.display();

    s.get_top();            
    return 0;
}