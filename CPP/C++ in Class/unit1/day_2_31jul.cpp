// // #include <iostream>
// // using namespace std;

// // // class arith {
// // //     int x , y ; 
// // //     public:
// // //     void getdata(){
// // //         cout<< "Enter the value of x and y : ";
// // //         cin >> x >> y; 
// // //     }
// // //     void sum(){
// // //         cout<<"The Sum is "<<x +y << endl;
// // //     }
// // //     void diff(){
// // //         cout<<"The Diff is "<<x -y << endl;
// // //     }
// // //     void mul(){
// // //         cout<<"The mul is "<<x *y << endl;
// // //     }
// // //     void divi(){
// // //         cout<<"The Div is "<<x /y << endl;
// // //     }
// // // };


// // // int main()
// // // {
// // //     arith obj;
// // //     obj.getdata();
// // //     obj.sum();
// // //     obj.diff();
// // //     obj.mul();
// // //     obj.divi();

// // //     return 0;
// // // }



// // // DSA Class 31/07/2023
   
// //     //1.1// algorithm (sum())

// //     // int a , b, c ;
// //     // cin>> a >>b  ;
// //     // c = a+b;
// //     // cout<<c ;


// //     //1.2// algorithm (num_0_to_10())

// //     // for(int i = 0 ; i<=10 ; i++){
// //         // cout<<i<<endl;
// //     // }
    

// //     // int a = 2 ; 
// //     // char str[35];
// //     // cout<< "Enter the name : " ;
// //     // cin>> str ;
// //     // cout<< str ;



// // class student{
// //     int roll;
// //     char name[50];
// //     float marks ;

// //     public:
// //     void data(){
// //         cout<<"Enter roll no: ";
// //         cin >>roll;
// //         cout<<"Enter name: ";
// //         cin >>name;
// //         cout<<"Enter marks: ";
// //         cin >>marks;
// //     }
// //     void details(){
// //         cout<< "Roll stu  is : "<<roll<<endl;
// //         cout<< "Name of stu  is : "<<name<<endl;
// //         cout<< "marks of stu  is : "<<marks<<endl;
// //     }
// // };

// // int main( ){
// //     student s1;
// //     s1.data();
// //     s1.details();

    


// //     return 0;
// // }


// #include<iostream>
// using namespace std;

// class student {

//     private:
//     int a , b ;
//     public:
//     void get(){
//         cout << "\n Enter the value for A and B: ";
//         cin>>a>>b;
//         }
//     void disp(){
//         cout<< "value of a is : "<<a<<endl;
//         cout<< "value of b is : "<<b<<endl;
//     }
//     void data();

//     };

//     void student :: 







// int main()
// {
//     student ob1;

//     ob1.get();
//     ob1.disp();
                        
//     return 0;
// }





#include<iostream>
using namespace std;
class maths{


   public: 
void det(){
    
}
void table(int k){
    
    for(int i = 1 ; i <=10 ; i++){
        cout <<k<<"X"<<i<<"="<<k*i<<endl;
    }
}
};

int main()
{
    int k ;
    cin>>k;
    maths obj;

    obj.table(k);


        
                
    return 0;
}