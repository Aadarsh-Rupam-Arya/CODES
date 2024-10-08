#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class node{
public:
    int data;
    node *next;
    node *prev;
};

class DLL{
public:
    node *head = NULL;
    node *tail = NULL;

    void create(int x){
        node *temp = new node;
        temp->data = x;
        temp->next = NULL;
        temp->prev = NULL;
        head = temp;
        tail = temp;
    }
    
    void insert_last(int x){
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

    void insert_front(int x){
        node *temp = new node;
        temp->data = x;
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

    void insert_poss(int x ){
        int poss, count = 1;
        cout<<"Enter position: ";
        cin>>poss;

        node *temp = new node ;
        temp->data = x ;
        temp->next = NULL;
        temp->prev = NULL;

        node *prev = NULL , *curr = head ;

        while(curr != NULL && count < poss){
            prev = curr ;
            curr = curr->next;
            count++;
        }
        if(count != poss){
            cout<<"Invalid position\n";
        }

        if(prev == NULL){
            head = temp;
            // temp->next = curr;
            // if(curr != NULL){
            //     curr->prev = temp;
            // }
        }
        else{
            prev->next = temp;
            temp->prev = prev;
            temp->next = curr;
            if(curr != NULL){
                curr->prev = temp;
            }
        }
    }

    void delete_begin(){
        if(head != NULL){
            head = head->next;
            if(head != NULL){
                head->prev = NULL;
            }
        }
        else{
            cout<<"Element cannot be deleted"<<endl;
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

    void delete_poss(){
        int poss , count = 1;
        cout<<"Enter position: ";
        cin>>poss;

        node *curr = head , *prev = NULL;

        while(curr != NULL && count < poss){
            prev = curr ;
            curr = curr->next;
            count++;
        }

        if(curr != NULL){
            if(prev != NULL){
                prev->next = curr->next;
                if(curr->next != NULL){
                    curr->next->prev = prev;
                }
            }
            else{
                head = curr->next;
                if(head != NULL){
                    head->prev = NULL;
                }
            }
            delete curr;
        }
        else{
            cout<<"Invalid position\n";
        }
    }

    void search(){
        node *temp = head;

        int key , count = 1 , flag = 0;
        cout<<"Enter element to search: ";
        cin>>key;
        while(temp != NULL){
            if(temp->data == key){
                cout<<"Element found at position: "<<count<<endl;
                flag = 1;
                break;
            }
            temp = temp->next;
            count++;
        }
        if(flag == 0){
            cout<<"Element not found."<<endl;
        }
    }

    void display(){
        node *temp = head ;
        while(temp != NULL){
            cout<<temp->data<<" <=> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

};

int main()
{

    DLL o;
    o.create(1);
    o.insert_last(2);
    o.insert_last(3);
    o.insert_last(4);
    o.insert_front(0);
    // o.insert_poss(20);
    o.display();
    // o.delete_begin();
    // o.delete_end();
    o.delete_poss();
    o.display();

    // o.search();

    return 0;
}
