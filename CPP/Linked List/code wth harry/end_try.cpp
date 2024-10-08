#include<iostream>
#include<string.h>
using namespace std;

class node{
    public:
    int data;
    node *next ;
};              

class LL{
    public: 
    node * head = NULL;
    node * last = NULL;

    void create(int x){
        node *temp  = new node ;
        temp->data = x ;
        temp->next = NULL;
        head = temp;
        last = temp;

    }

    void insert_last(int x){
        node* temp = new node ;
        temp->data= x ;
        temp->next = NULL;

        if(head == NULL){
            head = temp;
        }
        else{
            node * t = head ;
            while(t->next != NULL){
                t = t->next;
            }
            t->next = temp;
        }
    }

    void insert_begin(int x){
       
        node *temp = new node ;
        temp->data = x ;
        temp->next = head ;
        head = temp ;
    }

    

    void insert_poss(int x ){
        node* temp = new node ;
        temp->data = x ;
        temp->next = NULL;

        int count = 1 , poss ;
        cout<<"Enter the poss: ";
        cin>>poss;

        node *prev = NULL , *curr = head;

        while(curr != NULL && count<poss){
            prev = curr ; 
            curr = curr->next;
            count++;
        } 
        if (count != poss){
            cout<<"Invalid poss\n";
        }
        if (prev == NULL){
            temp->next = head ;
            head = temp ;
        }
        else{
           temp->next = curr;
           prev->next = temp;
        }

    }

    void delete_begin(){
        if(head != NULL){
        head = head->next;
        }
        else{
            cout<<"cant be deleted as it is NULL \n";
        }
    }

    void delete_end(){
        node * temp = head;
        node * prev = NULL ; 
        while(temp->next != NULL){
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        last = prev;
    }

    void delete_poss(int poss){
    node *curr = head , *prev = curr ;  
    int count = 1 ;
    while(curr->next != NULL && count < poss ){
        prev = curr ;
        curr =curr->next;
        count++;
    }
    prev->next = curr->next ;

    }

    void search(){
        int key , count = 1 , flag = 0 ;
        cout<<"Enter the val to search: ";
        cin>>key;
        node *temp = head ;
        while(temp->next != NULL){
            if(temp->data == key){
                cout<<"Elem found at poss: "<<count<<endl;
                flag = 1 ;
                break;
            }
           temp =  temp->next ;
            count++;
        }

        if(flag == 0){
            cout<<"Elem not found ! \n";
        }

    }
    


    void disp(){
        node * temp = head;
        while(temp != NULL){
            cout<<temp->data <<" ";
            temp = temp->next;
        }
       
    }

    void isempty(){
        if(head == NULL){
            cout<<"Empty\n";
        }
        else{
            cout<<"Elems are there\n";
        }
    }


};
                

int main()
{
    LL obj;
   
   int n ;
   cin>>n;

   for(int i = 0 ; i < n ; i++){
        int k ; 
        cin>>k;
        obj.insert_last(k);
   }
   cout<<"Linked List before deletion: ";
    obj.disp();	
    cout<<endl;	 

    // obj.delete_begin();
    // cout<<"del begin"<<endl;
    // obj.disp();	 	
    // obj.delete_end();
    // cout<<"del end"<<endl;	 	
    // obj.disp();
    // cout<<endl;	
    int poss ;
    cin>>poss;

    obj.delete_poss(poss);
    cout<<"Linked List after deletion: "; 	
    obj.disp();	

    // obj.search();
    
    return 0;
}