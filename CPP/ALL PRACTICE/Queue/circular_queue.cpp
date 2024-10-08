#include<iostream>
#include<string.h>
#include<fstream>
#define MAX 5
using namespace std;
              
class Circ_Queue{
    int arr[MAX];
    int front , rear ;
    public:

    Circ_Queue(){
        front = rear = -1 ;
    }

    void push(int x ){
        
        if( (rear == MAX-1 && front == 0) || (rear == front-1))         // overflow condition;
        {
            cout<<"Queue Overflow."<<endl;
        }
        else if(front == -1){                       // 1st elem insertion
            front = rear = 0 ;
            arr[rear] = x ;
            cout<<"Elem inserted "<<x<<endl;  
        }
        else if(rear == MAX-1 && front != 0 ){     // rear == MAx -1 and front not in 0
            rear = 0 ;
            arr[rear] = x ;
            cout<<"Elem inserted "<<x<<endl;  
        }
        else{           
            rear++ ;
            arr[rear] = x ;
            cout<<"Elem inserted "<<x<<endl;  
        }
    }

    void pop(){
        if(front==-1 && rear == -1){
            cout<<"Queue underflow."<<endl;
        }
        else if(front == rear){
            int t = arr[front];
            front = rear = -1 ;
            cout<<"Elem popped "<<t<<endl;            
        }
        else if(front == MAX -1){
            int t = arr[front];
            front = 0 ;
            cout<<"Elem popped. "<<t<<endl;
        }
        else{
            int t ;
            t = arr[front];
            front++;
            cout<<"Elem popped."<<t<<endl;
        }
    }

    void display(){
        if(front == -1){
            cout<<"Circular queue is empty."<<endl;
        }
        else{
            cout << "Circular Queue : ";
            for(int i = front  ; i < rear+1 ; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }


};               

int main()
{
    Circ_Queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();

    q.display();		 	
                
                
    return 0;
}