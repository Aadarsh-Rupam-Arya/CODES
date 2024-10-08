#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *link;
};

class LinkedList
{
public:
    node *head;

    LinkedList()
    {
        head = nullptr;
    }

    void create();
    void display();
    void insert_last(int x);
    void insert_begin(int x);
    void insert_at_index();
    void delete_begin();
    void delete_last();
    void delete_poss();
    void search();
};

void LinkedList::create()
{
    node *temp = new node;
    cout << "Enter the data to insert into the linked list: ";
    cin >> temp->data;
    temp->link = nullptr;

    if (head == nullptr)
    {
        head = temp;
    }
    else
    {
        node *t = head;
        while (t->link != nullptr)
        {
            t = t->link;
        }
        t->link = temp;
    }
}

void LinkedList::display()
{
    node *t = head;
    cout << "My linked list: ";
    while (t != nullptr)
    {
        cout << t->data << " ==> ";
        t = t->link;
    }
    cout << "NULL\n";
}

void LinkedList::insert_last(int x)
{
    node *temp = new node();
    temp->data = x;
    temp->link = nullptr;

    if (head == nullptr)
    {
        head = temp;
    }
    else
    {
        node *t = head;
        while (t->link != nullptr)
        {
            t = t->link;
        }
        t->link = temp;
    }
}

void LinkedList::insert_begin(int x)
{
    node *temp = new node;
    temp->data = x;
    temp->link = head;
    head = temp;
}

void LinkedList::insert_at_index()
{
    int pos, counter = 1;
    node *temp = new node;
    cout << "Enter the data to insert: ";
    cin >> temp->data;
    temp->link = nullptr;

    cout << "Enter the position: ";
    cin >> pos;

    node *pre = nullptr, *cur = head;
    while (cur != nullptr && counter < pos)
    {
        pre = cur;
        cur = cur->link;
        counter++;
    }

    if (counter != pos)
    {
        cout << "Invalid position." << endl;
        delete temp;
        return;
    }

    if (pre == nullptr)
    {
        temp->link = head;
        head = temp;
    }
    else
    {
        temp->link = cur;
        pre->link = temp;
    }
}

void LinkedList ::delete_begin()
{
    node *t = head;
    if (head != NULL)
    {
        head = head->link;
        cout << "Deleted Element : " << t->data << endl;
        delete t;
        cout << endl;
    }
    else
    {
        cout << "\nDeletion is not possible\n";
    }
}

void LinkedList ::delete_poss()
{

    node *current = head , *prev = current;
    int pos = 3 , counter = 1;
    cout<<"We are deleting the possition: "<<pos<<endl;
    while (current->link != NULL && counter < pos)
    {
        prev = current;
        current = current->link;
        counter++;
    }
    if (counter == pos){
    prev->link = current->link;
    cout << current->data;
    delete current;
    }
}

void LinkedList :: delete_last(){
    node *current = head, *prev = current;
    while (current->link != NULL)
    {
    prev = current;
    current = current->link;
    }
    prev->link = NULL;
    cout << current->data;
    delete current;
}

void LinkedList :: search(){
    int key, count = 1 , flag = -1;
    cout << "Enter a number to be searched in linked list: ";
    cin >> key;
    node *t = head;
    while (t->link != NULL)
    {
    if (t->data == key)
    {
            cout << "Element fount at possition: " << count << endl;
            flag = count;
            break;
    }
    t= t->link;
    count++;
    }
    if (flag == -1){
        cout<<"Element not present in the list."<<endl;
    }
}

int main()
{
    LinkedList l1;

    l1.create();
    l1.create();
    l1.create();
    l1.create();
    l1.create();
    l1.display();

    // int p;
    // cout << "Enter the data to insert at last: ";
    // cin >> p;
    // l1.insert_last(p);
    // int x;
    // cout << "Enter the data to insert at the beginning: ";
    // cin >> x;
    // l1.insert_begin(x);
    // l1.insert_at_index();
    // l1.display();
    // l1.delete_begin();
    l1.delete_last();
    // l1.delete_poss();
    // l1.search();

    // l1.display();

    return 0;
}

