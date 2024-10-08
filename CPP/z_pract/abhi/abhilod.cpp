#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
class node{
    public:
    int data ;
    node *next ;
}; 

class LL{
    public:

    node * head = NULL;
    node * last = NULL;

    void create(int x){
        node *temp = new node;  
        temp->data = x ;
        temp->next = NULL;

        if(head == NULL){
            head = temp;
            last = temp;
        }

        else{
            node *t  = head;
            while(t->next != NULL){
                t = t->next ;
            }
            t->next = temp;
        }
        
    }

    void insert_begin(int x ){
        node *temp = new node ;
        temp->data = x ;
        temp->next = head ;
        head = temp;
    }

    void ins_poss(int x){
        node *temp = new node ;
        temp->data = x ;
        temp->next = NULL;

        int poss , count= 1;
        poss = 2 ;

        node *prev = NULL , *curr = head ;

        while(curr->next != NULL && count < poss){
            prev = curr ;
            curr = curr->next;
            count++;
        }
        prev->next = temp;
        temp->next = curr;
    }

    void display(){
        
        
        node * t  = head ;

        while(t != NULL){
            cout<<t->data<<" => ";
            t=  t->next;
        }
        cout<<"NULL"<<endl;
        
    }
    

};



int main(){		 	

    LL l;

    l.create(1);
    l.create(2);
    l.create(3);

    l.insert_begin(0);

    l.ins_poss(25);



    l.display();

                
    return 0;
}