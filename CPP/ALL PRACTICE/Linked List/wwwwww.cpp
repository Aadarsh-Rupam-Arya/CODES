#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class node{
    public:
    int data ;
    node *next ;
    node *prev ; 
};

class DLL{
    public:
    node *head = NULL;
    node *tail = NULL;

    void  ins_last(int x){
        node * temp = new node ;
        temp->data = x ;
        temp->next = NULL;
        temp->prev = tail;

        if(head == NULL){
            head = temp;
        }
        else{
            tail->next = temp;
        }
        tail = temp;
    }

    void ins_begin(int x){
        node *temp = new node ;
        temp->data = x ;
        temp->next = head;
        temp->prev = NULL;
        if(head != NULL){
            head->prev = temp;    
        }
        head = temp;
        if(tail == NULL){
            tail = head;
        }

    }



    void disp(){
        node *t = head ;
        while(t != NULL){
            cout<<t->data<<" <=> ";
            t = t->next;
        }
        cout<<"NULL\n";
    }

    void ins_poss(int x ){
        node *temp = new node ;
        temp->data = x;
        temp->next = NULL;
        temp->prev = NULL;

        int poss , count= 1;
        cout<<"Enter poss: ";
        cin>>poss;

        node *pre = NULL , *curr = head ;
        while(curr != NULL && count<poss){
            pre = curr ;
            curr = curr->next ;
            count++;
        }


        if(count != poss){
            cout<<"Invalid poss\n";
        }
        if(pre == NULL){
            head = temp ;
            temp->next = curr ; 
            if(curr!= NULL){
                curr->prev = temp;
            } 
        }

        else{
            pre->next = temp;
            temp->prev = pre;
            temp->next = curr;
            if(curr!=NULL){
                curr->prev = temp;
            }
        }
    }

    void delete_end(){
        if(tail!=NULL){
        tail = tail->prev;
            if(tail!= NULL){
            tail->next = NULL;
            }
        }
        else{
            cout<<"Elem not deleted\n";
        }
    }



};


int main()
{
    DLL o;
    o.ins_last(1);		 	
    o.ins_last(2);		 	
    o.ins_last(3);		 	
    o.ins_last(4);	
    o.ins_begin(0);
    o.disp();           
    // o.ins_poss(22);
    
    o.delete_end();


    o.disp();           
                
    return 0;
}