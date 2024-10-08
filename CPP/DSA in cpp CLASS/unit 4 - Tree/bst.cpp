#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
};

node *root; // root created as global;

class BST
{
public:
    BST()
    {
        root = NULL;
    }

    void insert_node(int d);
    void inorder(node *);
    void preorder(node *);
    void postorder(node *);
    
    node *deletenode(node *, int );
    node *minnode(node *);

    int height(node *t);
    
};




void BST::insert_node(int d)
{
    node *temp = new node;
    temp->data = d;
    temp->left = NULL;
    temp->right = NULL;

    if (root == NULL)
    {
        root = temp;
        cout << "Root elem : " << d << endl;
    }
    else
    {
        node *ptr = root;
        node *parent = NULL;

        while (ptr != NULL)
        {
            parent = ptr;

            if (d > ptr->data)
            {
                ptr = ptr->right;
            }
            else
            {
                ptr = ptr->left;
            }
        }

        if (d > parent->data)
        {
            parent->right = temp;
            cout << "Inserted at right: " << d << endl;
        }
        else
        {
            parent->left = temp;
            cout << "Insterted at left: " << d << endl;
        }
    } 
}
void BST::inorder(node *p)
{
    if (p != NULL)
    {

        inorder(p->left);       // recutsively
        cout << p->data << " "; // print data
        inorder(p->right);      // recursively
    }
}
void BST::preorder(node *p)
{
    if (p != NULL)
    {

        cout << p->data << " "; // print data
        preorder(p->left);      // recutsively
        preorder(p->right);     // recursively
    }
}
void BST::postorder(node *p)
{
    if (p != NULL)
    {

        postorder(p->left);     // recutsively
        postorder(p->right);    // recursively
        cout << p->data << " "; // print data
    }
}

node *BST:: deletenode (node *rt , int key){
    if(rt == NULL){
        cout<<"Tree is empty."<<endl;
        return NULL;   // return rt ;
    }
    else{
        if(key > rt->data){
            rt->right = deletenode(rt->right , key);
        }
        else if(key < rt->data ){
            rt->left = deletenode(rt->left , key);
        }
        else{
            // one child ;
            if(rt->left == NULL){
                node *temp = rt->right ;
                delete rt ;
                return temp;
            }
            else if(rt->right == NULL){
                node *temp = rt->left;
                delete rt ;
                return temp;
            }
            else if(rt->left ==NULL && rt->right == NULL ){
                delete rt;
            }

            // two child ;
            node *temp = minnode(rt->right);    // 45 
            rt->data = temp->data ;             // will be now assigned as ROOT;
            rt->right = deletenode(rt->right , temp->data);            
        }
        return rt ;
    }
}

int BST:: height(node *t){
    if(t == NULL){
        return 0 ;
    }
    int l = height(t->left);
    int r = height(t->right);

    return ( l > r ) ? l+1 : r+1 ;
}

node *BST :: minnode(node *t){
    node *curr = new node ;
    curr = t;
    while (curr != NULL && curr->left != NULL){
        curr =curr->left;
    }
    return curr;
}
int main()
{
    BST o;
    o.insert_node(30);
    o.insert_node(10);
    o.insert_node(25);
    o.insert_node(50);
    o.insert_node(45);
    o.insert_node(75);
    o.insert_node(65);
    o.insert_node(2);
    o.insert_node(15);
    o.insert_node(90);
    o.insert_node(28);

   

    // int i  ;
    // while(cin>>i){
    //     o.insert_node(i);
    // }

    cout<<"Before deleting: \n";

    // cout << "Inorder : ";
    // o.inorder(root);
    // cout << endl;
    // cout << "preorder : ";
    o.preorder(root);
    cout << endl;
    // cout << "postorder : ";
    // o.postorder(root);
    // cout << endl;



    cout<<"After deleting preorder: \n";
    o.deletenode(root,2);
    o.preorder(root);

    cout<<"\nHeight of tree : "<<o.height(root);



    return 0;
}

