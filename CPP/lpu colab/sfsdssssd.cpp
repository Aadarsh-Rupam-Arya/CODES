// // #include<iostream> 
// // using namespace std; 
  
// // class Test 
// // { 
// // public: 
// //    Test(Test &t) {  } 
// //    Test()        {  } 
// // }; 
  
// // Test fun() 
// // { 
// //     cout << "fun() Called\n"; 
// //     Test t; 
// //     return t; 
// // } 
  
// // int main() 
// // { 
// //     Test t1; 
// //     Test t2 = fun(); 
// //     return 0; 
// // } 


// // #include<iostream>
// // using namespace std;

// // class Test
// // {
// // private:
// //     int x;

// // public:
// //     Test(int x = 0) { this->x = x; }
// //     void change(Test* t) { this = t; }
// //     void print() { cout << "x = " << x << endl; }
// // };

// // int main()
// // {
// //     Test obj(5);
// //     Test anotherObj(10);
// //     obj.change(&anotherObj);
// //     obj.print();
// //     return 0;
// // }


// #include <iostream>
// using namespace std;

// class Value {
// public:
//     int val;
//     Value(int v) : val(v) {}
//     Value operator!() {
//         return Value(!val);
//     }
// };

// int main() {
//     Value v(1);
//     Value res = !v;
//     cout << res.val;
//     return 0;
// }



