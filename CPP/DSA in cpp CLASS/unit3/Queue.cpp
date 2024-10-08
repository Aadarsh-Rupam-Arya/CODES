// You are using Java
#include<iostream>

#define MAX 5
using namespace std;
                
class Queue{
    int q[MAX];
    int front , rear ;
    public:

    Queue(){
        front = rear = -1;
    }

    void insert(int x){
        if(rear == MAX - 1){
            cout<<"Stack overflow\n";
        }
        else{
            rear++;
            q[rear] = x;
            cout<<"Elem inserted\n";
        }
    }

    int remove(){
        if(front == rear){
            cout<<"Stack underflow\n";
            return -1;
        }
        else{
            front++;
            return q[front];
        }
    }
    
    bool isempty(){
        if(front == rear ){
            return true;
        }
        else{
            return false;
        }
    }

    bool isfull(){
        if(rear == MAX-1){
            return 1;
        }
        else{
            return 0;
        }
    }

    void getfront(){
        cout<<"Front value"<<q[front+1]<<endl;
    }


    void disp(){ 
        if(isempty()){
            cout<<"Queue is empty.";
        }
        else{
        for(int i = front+1 ; i<rear+1 ; i++){
            cout<<q[i]<<" ";
        }
        cout<<endl;
        }
    }



};              

int main()
{
    Queue obj;

    // obj.insert(0);		 	
    // obj.insert(2);		 	
    // obj.insert(3);		 	
    // obj.insert(1);		 	
    // obj.insert(2);
    // obj.getfront();		 	
    // obj.insert(3);		 	
    // obj.remove();		 	
    obj.disp();   

    // cout<<obj.isempty()<<endl;      
    // cout<<obj.isfull()<<endl;      
                
    return 0;
}