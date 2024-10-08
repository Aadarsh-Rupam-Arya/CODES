// You are using GCC
#include <iostream>
using namespace std;

struct node {
    string data;
    node* nextptr;
} *stnode; // node declared

void make(int n);
void alternateDel(node* stnode);
void display();

int main() // main method
{
    // int n;
    // cin >> n;

    // make(n);

    // if (stnode == nullptr) {
    //     cout << "List is empty";
    // } else {
    //     cout << "Linked list data: ";
    //     display();
    //     cout << "\nAfter deleting alternate node:";
    //     alternateDel(stnode);
    //     display();
    // }
    cout<<"sahil chutiya\n";
    cout<<"sahil bhakland\n";
    cout<<"sahil loduuuuu\n";

    return 0;
}


void make(int n) // function to create linked list
{
    struct node* frntNode, * tmp;

    if (n == 0) {
        stnode = nullptr;
        return;
    }

    string data;
    
    cin >> data;

    stnode = new node;
    stnode->data = data;
    stnode->nextptr = nullptr;
    tmp = stnode;

    for (int i = 2; i <= n; i++) {
        
        cin >> data;

        frntNode = new node;
        frntNode->data = data;
        frntNode->nextptr = nullptr;
        tmp->nextptr = frntNode;
        tmp = tmp->nextptr;
    }
}

void display() // function to display linked list
{
    if (stnode == nullptr) {
        cout << "List is empty";
    } else {
        struct node* tmp = stnode;
        
        while (tmp != nullptr) {
            cout << tmp->data << " ";
            tmp = tmp->nextptr;
        }
    }
}

void alternateDel(node* stnode) // function to delete alternate nodes
{
    if (stnode == nullptr)
        return;

    node* prev = stnode;
    node* alt_node = stnode->nextptr;

    while (prev != nullptr && alt_node != nullptr) {
        prev->nextptr = alt_node->nextptr;

        delete alt_node;

        prev = prev->nextptr;
        if (prev != nullptr)
            alt_node = prev->nextptr;
    }
}
