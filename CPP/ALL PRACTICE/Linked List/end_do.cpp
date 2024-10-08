#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
class node {
    public :
    int data;
    node *next ;
    node *prev ;
};

class DLL{
    public:
    node *head ;
    node *tail ;

    void create(int x){
        node *temp = new node;
        temp->data = x ;
        temp->next = NULL;
        temp->prev = NULL;
        head = temp ;
        tail = temp ;
    }
    
    void ins_last(int x){
        node *temp = new node;
        temp->data = x;
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


    void ins_beg(int x){
        node *temp = new node;
        temp->data = x ;
        temp->next = head;
        temp->prev = NULL;
        head = temp ;
    }

    void ins_poss(int x){
        int poss , count = 1 ;
        cout<<"Enter poss: ";
        cin>>poss;
        node *temp = new node;
        temp->data = x ;
        temp->next = NULL;
        temp->prev = NULL;

        node *pre = NULL , *curr = head;

        while(curr!= NULL && count<poss){
            pre = curr ;
            curr = curr->next;
            count++;
        }

        if(count != poss){
            cout<<"invalid poss"<<endl;
        }
        if(pre == NULL){
            head = temp ;
            temp->next = curr;
            if(curr!= NULL){
                curr->prev = temp;
            }
        }
        else{
            pre->next = temp;
            temp->prev =pre;
            temp->next = curr;
            if(curr != NULL){
                curr->prev = temp;
            }
        }

    }

    void delete_end(){
        if(tail != NULL){
            tail = tail->prev;
            if(tail != NULL){
                tail->next = NULL;
            }
        }
        else{
            cout<<"Element cannot be deleted"<<endl;
        }
    }

    void delete_begin(){
        if(head != NULL){
            head = head->next;
            head->prev = NULL;
        }
        else{
            cout<<"Element cannot be deleted"<<endl;
        }
    }

    void delete_poss(){
        int poss , count = 1 ;
        cout<<"Enter the poss to delete: ";
        cin>>poss;

        node *curr = head , *pre = NULL;
        while(curr != NULL && count < poss){
            pre = curr ; 
            curr = curr->next;
            count++;
        }
        if(curr != NULL){
            if(pre!=NULL){
            pre->next = curr->next;
            if(curr->next != NULL){
                curr->next->prev = pre;
            }
            }
            else{
                head = curr->next;
                if(head != NULL){
                    head->prev = NULL;
                }
            }
        }
        else{
            cout<<"Invalid poss"<<endl;
        }
    }

    void search(){
        node *t = head ;
        int key ;
        cout<<"Enter the elem to search in Double LL: ";
        cin>>key;
        int index = 1, f= 0 ;
        while(t != NULL){
            if(key == t->data){
                cout<<"Elem found at poss: "<<index<<endl;
                f= 1 ;
                break;
            }
            index++;
            t = t->next;
        }
        if(f==0){
            cout<<"Element not found."<<endl;
        }
    }

    void disp(){
        node *t = head ;
        while (t!= NULL)
        {
            cout<<t->data<<" <=> ";
            t= t->next; 
        }
        cout<<" NULL"<<endl;
    }

};


int main()
{
    DLL o ;
    o.create(1);
    o.ins_last(2);
    o.ins_last(3);
    o.ins_last(4);
    o.ins_beg(0);
    // o.ins_poss(24);
    // o.disp();	
    // o.delete_begin();
    // o.delete_end();
    // o.delete_poss();
    o.disp();

    o.search();		 	

    return 0;
}


