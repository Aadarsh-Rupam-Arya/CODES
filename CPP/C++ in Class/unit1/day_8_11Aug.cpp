#include<iostream>
#include<string.h>
using namespace std;
class item;
class mean {
    int x , y ;
    public:
    void setnewval(){
        x = 200 ;
        y = 100 ;
    }
     friend void arith(item,mean);
     void num(mean){};
}s2;



class item {
    int a , b;
        int age ;
    public:
    void setval(){
        a = 50 ;
        b = 30 ;
    }
    void age_io(){
        cout<<"Enter age : ";
        cin>>age;
    }
    friend void arith(item,mean);
    friend void show_age(item);

    friend void mean :: num(mean s2);  // accessing friend class in other class using scope resollution operator ;
}s1;    

void arith(item s1 , mean s2){
    cout<<"SUM: "<<s1.a+s1.b<<endl;
    cout<<"DIV: "<<s2.x/s2.y<<endl;
}

void show_age(item s1){
    cout<<"The age is: "<<s1.age;
}



int main()
{
   item xi ;
   mean yi;
   xi.setval();
   yi.setnewval();
   
    arith(xi,yi);

    xi.age_io();

    show_age(xi);
    	             
    return 0;
}


// #include<iostream>
// #include<string.h>
// using namespace std;

// class data(
//     int x , y ;
//     pubic :
//     void getdata ( ){
//         x = 5 ;
//         y = 2 ;
//     }

// )              
                

// int main()
// {

    
    		 	
                
                
//     return 0;
// }