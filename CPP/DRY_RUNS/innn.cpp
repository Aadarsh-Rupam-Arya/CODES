// #include<iostream>
// #include<string.h>
// using namespace std;
                
                

// int main()
// {
//     int n = 6 ;
//     int arr[n] ={15,25,35,45,55,65};

//     int index = 5 ;

//     for(int i = index ; i>n-2 ; i-- ){

//         arr[i] = arr[i+1];
       
        		 	
//     }
//     n--;

//       for(int i = 0 ; i<n; i++ ){

//         cout<<arr[i]<<" ";
        		 	
//       }          
                
//     return 0;
// }


#include<iostream>
#include<string.h>
using namespace std;
                
                

int main()
{
    int size =4 ; 
    char arr[][2]= {"A","B","C","D"};

    int ind = 2 ;
    char val[] = "X";
    for(int  i= 0 ; i < ind + 1 ; i++){
        arr[i][1] = arr[i-1][1];
    }

    arr[ind][1] = val[1];	 	
    size++;



    for(int i = 0 ; i<size ; i++ ){
       cout<<arr[i]<<" "; 		 	
    }
                
                
    return 0;
}