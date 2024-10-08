#include<iostream>
#include<string.h>
using namespace std;
                
class node{
   public:
    int data ;
    node *next ;
};

class LL{
    node *head;
    node *last;
    public: 
    
    LL(){
        head = NULL;
        last = NULL;
    }

    void create(){
        
        node *temp = new node;
        int n ;
        cout<<"Enter the data to insert: ";
        cin>>n;
        temp->data = n;
        temp->next = NULL;

        head = temp ;
        last = temp ;
       
    }

    void insert_at_end(){
        node *temp = new node ;
        int n ;
        cout<<"Enter the data to insert at end: ";
        cin>>n;
        temp->data = n;
        temp->next = NULL;

        if(head == NULL){
            head = temp ;
            last = temp ;
        }
        else{
            last->next = temp;
            last = temp;
        }
    }

    void insert_at_begin(){
        node *temp = new node;
        int n ;
        cout<<"Enter the data to insert at begin: ";
        cin>>n;
        temp->data = n;
        temp->next = head;

        head = temp;
    }

    void insert_at_poss(){
        node *temp = new node;
        int n ;
        cout<<"Enter the data to enter at poss: ";
        cin>>n;
        int pos ;
        cout<<"Enter the poss to put: ";
        cin>>pos;
        int count = 1 ;

        temp->data = n ;
        temp->next = nullptr;
       
        node *curr = head , *pre = nullptr;

        while(curr!= nullptr && count < pos){
            pre = curr;
            curr = curr->next;
            count++;
        }
        if (count != pos){
            cout<<"Invalid poss\n";
            delete temp;
        }

        if (pre == nullptr){
            pre->next= head;
            head = temp;
        }
        else{
            temp->next = curr->next;
            curr->next=temp;
        }

    }

    // void delete_end(){
    //     node *temp = new node;
    //     temp = head;
    //     while(temp->next != NULL){
    //         temp = temp->next;
    //         if(temp->next == NULL){

    //         }
    //     }
    // }

    void display(){
        node *temp;
        temp = head;
        cout<<"The linked list: \n";
        while(temp != NULL){
            cout<<temp->data << " => ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main()
{
    LL list ;

    list.create();

    // list.insert_at_end();
    // list.insert_at_end();
    // list.insert_at_end();
   

    // list.insert_at_begin();

    list.insert_at_poss();

    

    list.display();


    return 0;
}