// // #include<iostream>
// // #include<string.h>
// // #include<fstream>
// // using namespace std;
                
// // class Number{
// //     int x , y;
// //     public :
// //     Number(int a , int b ){
// //         x = a ;
// //         y = b ;
// //     }

// //     void operator-(){
// //         x = -x;
// //         y = -y;
// //     }

// //     void show_data(){
// //         cout<<"x: "<<x<<endl;
// //         cout<<"y: "<<y<<endl;
// //     }
// // };

// // int main()
// // {
// //     Number N(1,2);
// //     N.show_data(); 
// //     N.operator-();
// //     // -N;
// //     // operator-(N);
// //     N.show_data();            
// //     return 0;
// // }




#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
class Number{
    int x , y;
    public :
    Number(int a , int b ){
        x = a ;
        y = b ;
    }

    void operator-(){
        x = -x;
        y = -y;
    }

    void show_data(){
        cout<<"x: "<<x<<endl;
        cout<<"y: "<<y<<endl;
    
    }

    friend void operator++(Number);   
    friend void operator--(Number);

    friend void operator++(Number,int);   
    friend void operator--(Number,int);
    
};               

void operator++(Number K){
    cout<<"Prefix increment:\n";
    cout<<"x: "<<++K.x<<endl;
    cout<<"y: "<<++K.y<<endl;
}
void operator--(Number K){
    cout<<"Prefix deccrement:\n";
    cout<<"x: "<<--K.x<<endl;
    cout<<"y: "<<--K.y<<endl;
}


void operator++(Number K,int){
    cout<<"Postfix increment:\n";
    K.x++;
    K.y++;
   
    cout<<"x: "<<K.x<<endl;
    cout<<"y: "<<K.y<<endl;
}
void operator--(Number k,int ){
    cout<<"Postfix deccrement:\n";
    k.x--;
    k.y--;
    cout<<"x: "<<k.x<<endl;
    cout<<"y: "<<k.y<<endl;
}



int main()
{

    Number N(1,2);

    N.show_data(); 
    // N.operator++();
    // N.operator--();
    // operator++(N);
    // operator--(N);
    operator++(N,100);  // here we just have to pass any integer value just to fulfill the parameter conditions
    operator--(N,100);

    // ++N;
    // --N;
    // operator-(N);
    // N.show_data();

                         
    return 0;
}
