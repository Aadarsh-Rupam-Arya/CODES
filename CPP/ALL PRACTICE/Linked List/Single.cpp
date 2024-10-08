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
        node *temp  = new node;
        temp->data = x ;
        temp->next = NULL;
        head = temp;
        last = temp;
    }
    void insert_last(int x){
        node *temp= new node;
        temp->data = x ;
        temp->next = NULL;

        if(head == NULL ){
            head = temp;
        }
        else{
            node *t = head ;
            while(t->next != NULL){
                t = t->next ;
            }
            t->next = temp ;
        }

    }

    void insert_front(int x){
        node * temp = new node ;
        temp->data = x ;
        temp->next = head ;
        head = temp;
    }

    void insert_poss(int x ){
        int poss, count = 1;
        cout<<"Enter poss: ";
        cin>>poss;

        node * temp = new node ; 
        temp->data = x ;
        temp->next = NULL;

        node *prev = NULL , *curr = head ;

        while(curr != NULL && count < poss){
            prev = curr ;
            curr = curr->next;
            count++;
        } 
        if(count != poss){
            cout<<"Invalid poss\n";
        } 
        
        if(prev == NULL){
            temp->next = head;
            head = temp ;
        }
        else{
            prev->next = temp ;
            temp->next = curr ;
        }

    }

    void delete_begin(){
        if(head != NULL){
        head = head->next;
        }
        else{
            cout<<"Elem cant be deleted"<<endl;
        }
    }
    
    void delete_end(){
        node *temp = head;
        node *prev = NULL;
        while(temp->next != NULL){
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        last = prev;
    }

    void delete_poss(){
        int poss , count = 1;
        cout<<"Enter poss: ";
        cin>>poss;
        node *curr = head , *prev = curr;
        while(curr->next != NULL && count < poss){
            prev = curr ;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next ;
    }

    void search(){
        node *temp = head ;

        int key , count = 1 , flag = 0; 
        cout<<"enter elem to search: ";
        cin>>key;
        while(temp->next != NULL){
            if(temp->data == key){
                cout<<"Elem found at poss: "<<count<<endl;
                flag =1 ;
                break;
            }
            temp = temp->next;
            count++;
        }
        if(flag==0){
            cout<<"Elem not found."<<endl;
        }
    }

 
    void display(){
        node *temp = head ;
        while(temp != NULL){
            cout<<temp->data<<" => ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

};




int main()
{

    LL o;
    o.create(1);	 	
    o.insert_last(2);
    o.insert_last(3);
    o.insert_last(4);
    o.insert_front(0);
    o.insert_poss(20);
    o.display();
    // o.delete_begin();
    // o.delete_end();
    // o.delete_poss();
    // o.display();
    
    // o.search();
                
    return 0;
}



