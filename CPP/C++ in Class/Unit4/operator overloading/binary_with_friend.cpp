#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

class binary{
    int x , y ;
    public:

    binary(){
        x = 0 ;
        y = 0 ;
    }

    binary(int a , int b){
        x = a ;
        y = b ;
    }


    void show_data(){
        cout<<"x: "<<x<<" y: "<<y<<endl;
    }

     friend binary operator-(binary , binary);
     friend binary operator+(binary , binary);
     friend binary operator*(binary , binary);
     friend binary operator/(binary , binary);
};

binary operator- (binary obj1 , binary obj2){
    binary temp;
    temp.x = obj1.x - obj2.x ;
    temp.y = obj1.y - obj2.y ;
    return temp ;
}

binary operator+ (binary obj1 , binary obj2){
    binary temp;
    temp.x = obj1.x + obj2.x ;
    temp.y = obj1.y + obj2.y ;
    return temp ;
}

binary operator* (binary obj1 , binary obj2){
    binary temp;
    temp.x = obj1.x * obj2.x ;
    temp.y = obj1.y * obj2.y ;
    return temp ;
}

binary operator/ (binary obj1 , binary obj2){
    binary temp;
    temp.x = obj1.x / obj2.x ;
    temp.y = obj1.y / obj2.y ;
    return temp ;
}
                

int main()
{

    binary o1(1,2) , o2(3,4) , o3 ;
    // o3 = o1+o2;
    // o3 = o1.operator+(o2);

    o3 = o1 + o2;
    o3.show_data();
    o3 = o1 - o2;
    o3.show_data();
    o3 = o1 * o2;
    o3.show_data();
    o3 = o1 / o2;
    o3.show_data();






                
                
    return 0;
}