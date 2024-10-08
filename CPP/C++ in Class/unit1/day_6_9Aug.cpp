
//  //inline functions :


// #include<iostream>
// #include<string.h>
// using namespace std;

// // inline int sum(int a , int b ){
// //     return a+b;
// // }

// class maths {
//     int a ;
//     int b ;

//     public :
//     int sum(int a , int b){
//         return a + b ;
//     } 
//     int div(int a , int b){
//         return a / b ;
//     } 
//     int mul(int a , int b);
// };

// inline int maths ::  mul(int a , int b){
//     return a*b;
// }

// int main()
// {
//     maths obj ;
//     int a = 8 , b = 2 ;
//     int c = 20 , d = 10 ;

     
//     cout<<"Sum: "<<obj.sum(a,b)<<endl;
//     cout<<"Sum: "<<obj.sum(c,d)<<endl;
//     cout<<"div: "<<obj.div(a,b)<<endl;
//     cout<<"div: "<<obj.div(c,d)<<endl;
//     cout<<"mul: "<<obj.mul(a,b)<<endl;
//     cout<<"mul: "<<obj.mul(c,d)<<endl;

                
                
//     return 0;
// }


#include<iostream>
#include<string.h>
using namespace std;
                
void sl_st(int arr[] , int n ){
for(int i = 0 ; i<n-1 ; i++ ){
    int minIndex = i ;
    for(int j = i+1 ; j < n ; i++){
        if(arr[minIndex]== arr[j]){
            minIndex = j ;

        }
    }
    swap(arr[minIndex],arr[i]);
}
    
}                

int main()
{
    int n = 5; 
    // cin>>n;

    int arr[] = {3,2,6,4,2};
    sl_st (arr,sizeof(arr)/ sizeof(*arr));

for(int i = 0 ; i<5 ; i++ ){
    cout<<arr[i];		 	
}

                
                
    return 0;
}