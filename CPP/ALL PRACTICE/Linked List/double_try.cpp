#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class node{ 
    public:
    int data; 
    node * next = NULL ;
    node * prev = NULL ;
};             

class DLL{
    
    public:
    node *head = NULL;
    node *tail = NULL;

    void create(int x){
        
        node *temp = new node ;
        temp->data = x ;
        temp->next = NULL;
        temp->prev = NULL;

        head = temp;
        tail = temp;
        
    
    }

    void ins_last(int x){
        node *temp = new node ;
        temp->data = x ;
        temp->next = NULL;
        temp->prev = tail;

        if(head == NULL){
            head = temp ;
            tail = temp ;
        }
        else{
            tail->next = temp;
        }
        tail = temp; 
    }

    void ins_front(int x){
        node *temp = new node ;
        temp->data = x ;
        temp->next = head;
        temp->prev = NULL;

        head = temp ;
    }

    void ins_poss(int x){
        
        int poss , count = 1;
        cout<<"Enter poss: ";
        cin>>poss; 
        
        node *temp = new node ;
        temp->data = x ;
        temp->next = NULL;
        temp->prev = NULL;

        node *pre = NULL , *curr = head ;

        while(curr!= NULL && count<poss){
            pre = curr ; 
            curr = curr->next ;
            count++;
        }

        if(count != poss){
            cout<<"Invalid Poss"<<endl;
        }
        if(pre == NULL){
            head = temp ;
            tail = temp ;
        }
        else{
            pre->next = temp;
            temp->prev = pre;
            temp->next = curr;
            if(curr != NULL){
            curr->prev = temp;
            }
        }
    }

    void del_last(){
        node *t = head ;
        node *k = new node;
        if(head->next = NULL){
            head = NULL;
            tail = NULL;
        }
        else{
        while(t->next != NULL){         // |
            k = t ;                     // |
            t = t->next;                // |---- [OR]
        }                               // | 
        k->next = NULL;                 // |
        }
        // if(tail != NULL){
        //     tail = tail->prev;
        //     if(tail != NULL)
        //     tail->next = NULL;
        // }
        // else{
        //     cout<<"Elem cant be deleted";
        // }

    }

    void display(){
        node *t = head ;
        while(t != NULL){
            cout<<t->data <<" <=> ";
            t =  t->next;
        }
        cout<<" NULL"<<endl;
    }

};
                

int main()
{
    DLL o ;
    // o.create(1);
    o.ins_last(2);
    o.ins_last(3);
    o.ins_last(4);
    // o.ins_front(0);
    // o.ins_poss(24);
    // o.del_last();
    // o.del_last();
    // o.del_last();
    // o.del_last();
    // o.del_last();


    o.display();                
                
    return 0;
}