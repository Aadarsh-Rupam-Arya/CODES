#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
class node {
    public:
    int data;
    node *left = NULL; 
    node *right = NULL; 
};

node *root = NULL;

class BST{
    public:

    void ins_last(int x){
        node *temp = new node ;
        temp->data = x;
        temp->left = NULL; 
        temp->right = NULL; 

        if(root == NULL){
            root = temp ;
            cout<<"Root elem is : "<<root->data<<endl;
        }
        else{
            node *ptr = root ;
            node *parent  = NULL;

            while(ptr!= NULL){
                parent = ptr;
                
                if(x > root->data){
                    ptr = ptr->right;
                }
                else{
                    ptr = ptr->left;
                }
            }

            if( x > parent->data ){
                parent->right = temp;
                cout<<"Inserted at right: "<<x<<endl;
            }
            else{
                parent->left = temp;
                cout<<"Inserted at left: "<<x<<endl;
            }

        }
    
    }

    void preorder(node *p){
                
        if(p!= NULL){
            cout<<p->data<<" ";
            preorder(p->left);
            preorder(p->right);

        }

    }

    void inorder(node *p){
                
        if(p!= NULL){
            preorder(p->left);
            cout<<p->data<<" ";
            preorder(p->right);

        }

    }

    void postorder(node *p){
                
        if(p!= NULL){
            preorder(p->left);
            preorder(p->right);
            cout<<p->data<<" ";

        }

    }

    

};



int main()
{
    BST o ;
    o.ins_last(10);		 	
    o.ins_last(20);		 	
    o.ins_last(5);		 	
    o.ins_last(4);		 	
    o.ins_last(50);  
             
    cout<<"Preorder: ";
    o.preorder(root);
    cout<<endl;

    cout<<"Inorder: ";
    o.inorder(root);
    cout<<endl;

    cout<<"Postorder: ";
    o.postorder(root);
    cout<<endl;


    return 0;
}