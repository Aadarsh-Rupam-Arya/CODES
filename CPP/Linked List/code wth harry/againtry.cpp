#include<iostream>
#include<string.h>
using namespace std;

class node{
  public:
    int data;
    node * next;
};

class LL{
    public :
    node* head = NULL;
    node * last = NULL;

    void create(int x ){
        node*temp = new node ;
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

    void insert_being(int x ){
        node * temp=new node;
        temp->data = x ;
        temp->next = head ; 

        head = temp;
    }

    void insert_poss(int x ){
        node * temp  = new node ;
        temp->data =  x ;
        temp->next = NULL;

        int poss ; int count = 1 ;
        cout<<"enter poss: ";
        cin>>poss;
        node * prev = NULL ; 
        node * curr = head ;

        while(curr->next != NULL && count<poss ){
            prev = curr ;
            curr = curr->next ;
            count++;
        }

        if(count!= poss){
            cout<<"invalid\n";
        }
        if(prev == NULL){
            temp->next = head ;
            head = temp;
        }
        else{
            temp->next = curr ;
            prev->next = temp;
        }
    }

    void delete_first(){
        head  = head->next;
    }

    void delete_last(){
        node *curr = head ;
        node *prev = NULL;

        while(curr->next != NULL){
            prev = curr ;
            curr = curr->next;
        }
        prev->next = NULL;
        last = prev ;
    }

    void delete_poss(){
        node * curr = head , * prev = curr ;
        int poss , count  = 1;

        while(curr->next != NULL && count < poss){
            prev = curr ;
            curr  = curr->next ;
            count++;
        }   
        prev->next = curr->next;
    }

    void search(){
        int key , flag = 0 , count = 1 ;
        cout<<"Enter the elem to find : ";
        cin>>key;
        node * temp  = head ;

        while(temp->next != NULL){
            if(temp->data == key ){
                cout<<"Elem found at poss: "<<count<<endl;
                flag = 1 ;
                break;
            }
            temp = temp->next ;
            count++ ;
            
        }

        if(flag == 0 ){
            cout<<"Elem not present\n";
        }

    }
    
    void disp(){
        node * temp = head ;
        while(temp != NULL){
            cout<<temp->data<<" => ";
            temp = temp->next ;
        }
        cout<<"NULL\n";
    }

    

    
    

};






                

int main()
{

    LL ob ;

    ob.create(1);
    ob.insert_last(2);
    ob.insert_last(3);
    ob.insert_last(4);
    ob.insert_being(0);
    // ob.insert_poss(50);
    ob.disp();
    // ob.delete_first();
    // ob.delete_last();
    ob.delete_poss();
    
    ob.disp();
    		 	
                
                
    return 0;
}