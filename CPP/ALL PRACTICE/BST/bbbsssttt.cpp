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
            root =temp;
            cout<<"Root elem inserted : "<<x<<endl;
        }
        else{
            node  * ptr= root , *parent = NULL;
            while(ptr != NULL){
                parent = ptr;

                if( x > ptr->data ){
                    ptr = ptr->right;
                }
                else{
                    ptr = ptr->left ;
                }

            }

            if(x > parent->data){
                parent->right = temp;
                cout<<"Inserted at right : "<<x<<endl;
            }
            else{
                parent->left =temp;
                cout<<"Inserted at left  : "<<x<<endl;
            }
        }
    }

    void preorder(node *p){
        if(p!=NULL){
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

    node *del_node(node *rt , int key){
        if(rt == NULL){
            cout<<"Tree is empty"<<endl;
            return NULL;
        }
        else{
            if(key > rt->data){
                rt->right = del_node(rt->right , key);
            }
            else if(key < rt->data){
                rt->left = del_node(rt->left , key);
            }
            else{
                if(rt->left == NULL){
                    node *temp = rt->right ;
                    delete rt;
                    return temp;
                }
                else if(rt->right == NULL){
                    node *temp = rt->left ;
                    delete rt;
                    return temp;
                }
                else if(rt->left == NULL && rt->right == NULL){
                    delete rt;
                }

                node *temp  = minnode(rt->right);
                rt->data = temp->data ;
                rt->right = del_node(rt->right , temp->data);
            }
        }
    }

};              

int main()
{
    BST o;
    o.ins_node(30);	 	
    o.ins_node(45);	 	
    o.ins_node(10);	 	
    o.ins_node(19);	 	
    o.ins_node(24);	 	
    o.ins_node(56);	 	
    o.ins_node(100);	 	
    o.ins_node(3);	

    cout<<"Pre : ";
    o.preorder(root);
    cout<<endl;
    cout<<"In : ";
    o.inorder(root);
    cout<<endl;
    cout<<"Post : ";
    o.postorder(root);
    cout<<endl;
                
                
    return 0;
}