#include<iostream>
#define MAXSIZE 100
using namespace std;

int a[MAXSIZE];
int n,i;

void create_Array(){
cout<<"Enter the size of array : ";
cin>>n;
cout<<"Enter "<<n<<" Number of element : ";
for(i=0;i<n;i++)
cin>>a[i];
}

void Traversing_Forward(){
cout<<"The array Element are : "<<endl;
for(i=0;i<n;i++)
cout<<a[i]<<"\t";

}

void Traversing_backward(){
cout<<"\nThe array Element in backward order are : "<<endl;
for(i=n-1;i>=0;i--)
cout<<a[i]<<"\t";
}

void insert_Last(int t){
a[n]=t;
n++;
}

void insert_First(){
int t;
cout<<"\n\nEnter value to insert at first : ";
cin>>t;
for(i=n-1;i>=0;i--)
a[i+1]=a[i];
a[0]=t;
n++;

}

void insert_at_givenposition(int p){
int t;
cout<<"Enter value to insert : ";
cin>>t;
for(i=n-1;i>=p;i--)
a[i+1]=a[i];
a[p]=t;
n++;

}

int main(){
int x,p;
create_Array();
Traversing_Forward();
Traversing_backward();

cout<<"\n\nEnter the value to insert at last : ";
cin>>x;
insert_Last(x);
Traversing_Forward();

insert_First();
Traversing_Forward();

cout<<"\n\nEnter the position to insert value : ";
cin>>p;
insert_at_givenposition(p);
Traversing_Forward();

return 0;
}