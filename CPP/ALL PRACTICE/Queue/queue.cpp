#include<iostream>
#include<string.h>
#include<fstream>
#define MAXSIZE 100
using namespace std;
                
class Queue{
    int arr[MAXSIZE];
    int front , rear ;

    public:

    Queue(){
        front = rear = -1 ;
    }

    void insert(int x){
        if(rear == MAXSIZE-1){
            cout<<"Queue overflow."<<endl;
        }
        else{
            rear++;
            arr[rear] = x ;
            cout<<"Elem inserted. => "<<x<<endl;
        }
    }

    void remove(){
        if(rear == front){
            cout<<"Queue Undeflow."<<endl;
            rear = front = -1 ;
        }
        
        else{
            front++;
            int t = arr[front];
            cout<<"Elem deleted.. => "<< t<<endl;
        }
    }

    void display(){
        if(front ==rear){
            cout<<"Queue is empty."<<endl;
        }
        else{
            cout<<"Queue: ";
            for(int i = front+1 ; i < rear+1 ; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }

    void isempty(){
        if(front == rear){
            cout<<"Queue is empty."<<endl;
        }
        else{
            cout<<"Queue contain elem."<<endl;
        }
    }

    void isfull(){
        if(rear == MAXSIZE -1 ){
            cout<<"Queue is full."<<endl;
        }
        else{
            cout<<"Queue have space."<<endl;
        }
    }
    void frdisp(){
        cout<<"front: "<<front<<" rear: "<<rear<<endl;
    }

};             

int main()
{
    Queue q;
    q.insert(1);
    q.insert(2);
    q.insert(3);
    q.insert(4);
    q.frdisp();
    q.remove();
    q.remove();
    q.remove();
    q.remove();
    q.remove();
    q.insert(1);
    q.insert(2);
    q.insert(3);
    q.frdisp();
    q.remove();
    q.remove();
    q.remove();
    
    

    q.frdisp();
    // q.isempty();
    
    q.display();
    
    // q.remove();

    // q.display();

    
            
                
    return 0;
}

