#include<iostream>
#include<string.h>
using namespace std;

class A {

    int a , b ;
    public : 
        int k = 50;  // for accesing the member and member func all should be public only ;
    void get(){
        cout<<"Enter val of a : ";
        cin>>a;
        cout<<"Enter val of b : ";
        cin>>b;
    }

    void sum(){
        cout<<"The sum of a & b is : " <<a+b<<endl;
    }

    void arr_traversing_with_pointer(int){
        int a[] = {10, 20, 30, 40, 50, 60};
        int *ptr = &a[0];

        for (int i = 0; i < 6; i++)
        {
            cout << *(ptr + i) << " ";
        }         
    }

}; 

// accesing the members and functions in class : 
    
    // NOTE : we can only acces the public members like this

int A :: *ptrmdt = &A :: k ; 

void (A:: *ptrmf)(int) = &A :: arr_traversing_with_pointer; 


                
int main()
{
    A obj ;
    A *ptr;

    ptr = &obj ; 

    ptr->get();   
    ptr->sum();   

    // (*ptr).get();
    // (*ptr).sum();

    cout<<endl;
    cout<<"Calling the function through direct accesing ==> : ";
    (*ptr).arr_traversing_with_pointer(3);  

    cout<<"\nThe value of K by calling through the pointer accesing the members: "<<obj.*(ptrmdt)<<endl;   // accesing the memeber function like we do call ==> (obj.k);
    cout<<"We can do array traversing by calling function by accesing the members through pointers ==> ";
    (obj.*ptrmf)(3);


    return 0;
}


    