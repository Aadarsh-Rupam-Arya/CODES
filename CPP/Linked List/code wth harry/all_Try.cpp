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
    node *head = NULL;
    node *last = NULL;

    void create(int x){
        node *temp = new node ;
        temp->data = x ;
        temp->next = NULL;

        head = temp ;
        last = temp;
    }

    void ins_last(int x){
        node *temp = new node ;
        temp->data = x;
        temp->next = NULL;

        if(head == NULL){
            head = temp;
            last = temp;
        }
        else{
            node *t = head ;
            while(t->next != NULL){
                t = t->next;
            }
            t->next = temp;
        }
    }

    void ins_first(int x){
        node *temp = new node;
        temp->data = x ;
        temp->next = head;
        head = temp ;

    }

    void ins_poss(int x){
        node *temp = new node ;
        temp->data = x; 
        temp->next = NULL;

        int poss , count = 1 ;
        cin>>poss;

        node *prev = NULL , *curr = head ;

        while(curr != NULL && count < poss){
            prev = curr ;
            curr = curr->next;
            count++;
        }
        if(count!=poss){
            cout<<"Invalid input\n";
        }
        else if(prev == NULL){
            prev->next = NULL;
            prev = temp ; 
        }
        else{
            temp->next = curr ;
            prev->next = temp ;
        }
        

    }

    void del_f(){
        head = head->next;
    }

    void del_l(){
        node *temp = head , *prev = NULL;
        while(temp->next != NULL){
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        last = prev;
    }

    void del_poss(int poss){
        node *curr = head , *prev = curr;
        int count = 1;
        
        while(curr->next != NULL && count < poss){
            prev = curr ;
            curr = curr->next;
            count++;
        }
            prev->next = curr->next;
    }

    void disp(){
        node *temp = head ;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }



};              

int main()
{
    LL obj;

    obj.create(1);
    obj.ins_last(2);
    obj.ins_last(3);
    obj.ins_first(0);
    // obj.ins_poss(5);
    cout<<"LL bef: ";
    obj.disp();
    int poss;
    cin>>poss;
    obj.del_poss(poss);
    cout<<"LL aft: ";
    obj.disp();
    
    
    
                
                
    return 0;
}