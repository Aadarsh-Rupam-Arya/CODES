#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class node {
    public:
    int data ;
    node * left ;
    node * right ;
};               

node * root = NULL;

class BST{
    public:

    void ins_node(int x ){
        
        node *temp = new node ;
        temp->data = x ;
        temp->left = NULL;
        temp->right = NULL;

        if(root == NULL){
            root = temp ;
            cout<<"Root element : "<<root->data<<endl;
        }
        else{
            node *ptr = root , *parent = NULL;
            while(ptr!=NULL){
                parent = ptr;
                if(x >  ptr->data){
                    ptr = ptr->right;
                }
                else{
                    ptr = ptr->left;
                }
            }

            if(x > parent->data){
                parent->right = temp;
                cout <<"Elem inserted at right "<<x<<endl;
            }
            else{
                parent->left = temp;
                cout <<"Elem inserted at Left "<<x<<endl;
            }

        }

    }


    void preorder(node *p){
        if(p != NULL){
        cout<<p->data <<" ";
        preorder(p->left);
        preorder(p->right);
        }
    }
    void inorder(node *p){
        if(p!=NULL){
        inorder(p->left);
        cout<<p->data <<" ";
        inorder(p->right);
        }
    }
    void postorder(node *p){
        if(p!=NULL){
        postorder(p->left);
        postorder(p->right);
        cout<<p->data <<" ";
        }
    }

    

};
                

int main()
{

   BST o ;
   o.ins_node(30); 		 	
   o.ins_node(20); 		 	
   o.ins_node(10); 		 	
   o.ins_node(25); 		 	
   o.ins_node(45); 		 	
   o.ins_node(50); 		 	
   o.ins_node(60); 		 	
   o.ins_node(44); 		 	
   o.ins_node(55); 	

    cout << "Inorder : ";
    o.inorder(root);
    cout << endl;
    cout << "preorder : ";
    o.preorder(root);
    cout << endl;
    cout << "postorder : ";
    o.postorder(root);
    cout << endl;	 	
                
                
    return 0;
}