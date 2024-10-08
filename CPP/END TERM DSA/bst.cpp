#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
class node{
    public: 
    int data ;
    node *left ;
    node *right;
};

node *root = NULL;

class BST{
    public:
    
    void ins_node(int x){
        node *temp = new node ;
        temp->data = x ;
        temp->left = NULL;
        temp->right = NULL;

        if(root == NULL){
            root = temp;
            cout<<"Root: "<<root->data<<endl;
        }
        else{
            node *ptr =root , *parent = NULL;
            while(ptr != NULL){
                parent = ptr ;
                if(x > ptr->data){
                    ptr = ptr->right ;
                }
                else{
                    ptr = ptr->left ;
                }
            }

            if(x > parent->data){
                parent->right = temp;
                cout<<"Node inserted RIGHT: "<<x<<endl;
            }
            else{
                parent->left = temp;
                cout<<"Node inserted LEFT: "<<x<<endl;

            }

        }

    }

    void inorder(node *p){
        if(p!=NULL){
            inorder(p->left);
            cout<<p->data<<" ";
            inorder(p->right);
        }
    }

    void preorder(node *p){
        if(p!=NULL){
            cout<<p->data<<" ";
            preorder(p->left);
            preorder(p->right);
        }
    }

    void postorder(node *p){
        if(p!=NULL){
            postorder(p->left);
            cout<<p->data<<" ";
            postorder(p->right);
        }
    }

};



int main()
{

    BST s ;
    // s.ins_node(3);		 	
    s.ins_node(1);		 	
                
                
    return 0;
}