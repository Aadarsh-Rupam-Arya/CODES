#include<iostream>
#include<string.h>
#include<fstream>
#define MAX 5 
using namespace std;

              
class CircularQueue{
    int q[MAX];
    int front , rear ;
    public:

    CircularQueue(){
        front = rear = -1;
    }

    void insert(int x){
        if((front==0 && rear == MAX - 1) || (rear==front-1)){
            cout<<"Stack overflow\n";
        }
        else if(front == -1 && rear == -1){
            front = 0 ;
            rear = 0 ;
            q[rear] = x;
            cout<<x<<"- Elem inserted.\n";
        }
        else if(front != 0 && rear == MAX-1){
            rear = 0 ;
            q[rear] = x ;
            cout<<x<<"- Elem inserted.\n";
        }
        else{
            rear++;
            q[rear] = x ;
            cout<<x<<"- Elem inserted.\n";
        }
    }

    void remove(){
        if(front==-1 && rear==-1 ){
            cout<<"Stack underflow"<<endl;
        }
        else if(front == MAX-1){
           int t = q[front];
           front = 0;
           cout<<t<<"- Elem deleted.\n";
        }
        else if(front == rear){
            int t= q[front];
            front = -1 ; 
            rear = -1 ; 
            cout<<t<<"- Elem deleted.\n";    
        }
        else{
            int t = q[front];
           front++;
           cout<<t<<"- Elem deleted.\n";
        }
    }               
};

int main()
{
    CircularQueue cq;

    cq.insert(1);
    cq.insert(2);
    cq.insert(3);
    cq.insert(4);
    cq.insert(5);
    cq.remove();
    cq.remove();
    cq.remove();

    		 	
                               
    return 0;
}