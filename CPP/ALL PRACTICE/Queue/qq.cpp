#include<iostream>
#include<string.h>
#include<fstream>
# define MAX  100
using namespace std;

class Queue{
    public:
    int arr[MAX];
    int rear = -1 , front = -1 ;

    void push(int x){
        if(rear == MAX -1 ){
            cout<<"Queue overflow"<<endl;
        }
        else{
            rear++;
            arr[rear] = x ;
            cout<<"elem ins "<<x<<endl;
        }
    } 
    void pop(){
        if(front == rear){
            cout<<"queue underflow"<<endl;
        }
        else{
            front++ ;
            int t= arr[front];
            cout<<"Elem popped "<<t<<endl;
        }
    }

    void disp(){
        for(int i = front+1 ; i < rear+1 ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
                

int main()
{
    Queue q ;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    q.pop();
    // q.pop();
    q.disp();
    
    		 	
                
                
    return 0;
}