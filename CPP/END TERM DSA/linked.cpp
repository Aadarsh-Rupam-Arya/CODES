#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
class node {
    public:
    int data ;
    node *next  = NULL;
};

class LL{

    node *head = NULL ;
    node * tail = NULL;

    public:

    void ins_last(int x){
        node *temp = new node ;
        temp->data = x ;
        temp->next = NULL;

        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            node *t = head  ;
            while( t->next != NULL){
                t = t->next;
            }
            t->next = temp;
        }

    }


    void disp(){
        node * t = head ;
        while(t != NULL){
            cout<<t->data <<" => ";
            t = t->next;
        }
        cout<<"NULL"<<endl;

    }

    void ins_f(int x ){
        node * temp  = new node ;
        temp->data = x;
        temp->next = head;
        head = temp;
    }

    void ins_poss(int x){
        int poss;
        cout<<"Enter poss: ";
        cin>>poss;

        

    }
    

};


int main()
{

    LL o ;
    o.ins_last(1);
    o.ins_last(2);
    o.ins_last(3);
    o.ins_f(0);
    o.disp();
    		 	
                
                
    return 0;
}