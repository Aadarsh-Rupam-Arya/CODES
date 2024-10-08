#include<iostream>
#include<string.h>
using namespace std;
                
class item {
    static int count;
    int num;
    int  c ;

    public:
    void setdata(){
         c = ++count;
    }
    void showdata(){
        cout<<"code: "<<c<<endl;
    }
    
    static void get_count(){      // here we are assigning static member function 
       
        cout<<"count: "<<count<<endl;   // in static member function we can only use a static data member
    }

};
int item ::count;  // if we are using static member function then we have to initilise it again outside the class too
                

int main()
{
    item s1 ,s2 ,s3 ;

    s1.setdata();   
    s2.setdata();

    item :: get_count();  // while calling the function we call this through the class not with object ;

    s3.setdata();  

    item :: get_count();

    s1.showdata();
    s2.showdata();
    s3.showdata();
     
    return 0;
}