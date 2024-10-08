// stack implementation using array


#include<iostream>
#include<string.h>
#define MAXSIZE 5
using namespace std;


class Stack{
    int arr[MAXSIZE];
    int top ;

    public : 

    Stack(){
        top = -1 ;
    }
    void push(int);
    int pop();
    void isfull();
    void isempty();
    void gettop();

    void disp(){
        cout<<"The stack is : ";
        for(int i = 0 ; i < MAXSIZE ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


};

void Stack:: push(int x){
    // check overflow;

    if (top == MAXSIZE - 1 ){
        cout<<"Stack is overflow\n";
    }
    else{
        top++;
        // int k ;
        // cout<<"Enter the value to insert in stack : ";
        // cin>>k;.
        arr[top] = x; 
        cout<<"Elem inserted ot stack\n";
    }

}

int Stack:: pop(){
    int t ;
    if(top == -1){
        cout<<"Stack is underflow\n";
    }
    else{
        t = arr[top];
        top--;

    }
    return t ;
}

void Stack :: isfull(){
    if(top == MAXSIZE-1){
        cout<<"Is full\n";
    }
    else{
        cout<<"Threre is space for "<< MAXSIZE - top - 1<<" elements\n";
    }
}

void Stack :: isempty(){
    if(top == -1){
        cout<<"Is Empty\n";
    }
    else{
        cout<<"There is elem "<<top+1<<" present in it\n";
    }
}


void Stack :: gettop(){
    cout<<"The top elem is : "<<arr[top]<<endl;
}

               
                

int main()
{
   Stack obj ;

    // push (1), push (2), pop, push (1), push (2), pop, pop, pop, push (2), pop 
   obj.push(1);
   obj.push(2);
   cout<<obj.pop()<<endl;
   obj.push(1);
   obj.push(2);
   cout<<obj.pop()<<endl;
   cout<<obj.pop()<<endl;
   cout<<obj.pop()<<endl;
   obj.push(2);
   cout<<obj.pop()<<endl;







//    obj.push(1);
//    obj.push(2);
//    obj.push(3);
//    cout<<obj.pop()<<endl;
//    cout<<obj.pop()<<endl;
//    obj.push(4);
//    obj.push(5);
//    obj.push(6);
//    obj.push(7);

    // obj.disp();
//     obj.isfull();
//     obj.isempty();
//     obj.gettop();

                
                
    return 0;
}