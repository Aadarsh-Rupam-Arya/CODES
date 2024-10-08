#include<iostream>
#include<string.h>
using namespace std;
               
                

int main()
{
     	
// 	int arr[] = {1,2,3};
// 	int arr1[] = {4,5,6};
// cout<<"Sum of above arrays of same elements: ";
//     for(int i = 0 ; i<3 ; i++ ){
       
//            int k =  arr[i] + arr1[i];
//            cout<<k<<" ";
       
//     }
//     cout<<endl;

    int twod_arr[2][3] = {{1,2,3},
                         {4,5,6}};

    int twod_arr1[2][3] = {{1,2,3},
                           {4,5,6}};



// 2d matrix product;

        for(int i = 0 ; i<2 ; i++ ){
        for(int j = 0 ; j< 3 ; j++){
            for(int k = 0 ; k < 3 ; k++){
            // twod_arr[i][j] = twod_arr[i][j] + twod_arr1[i][j]; 
            // twod_arr[i][j] = twod_arr[i][k] * twod_arr1[k][j];
             twod_arr[i][j] += twod_arr[i][k] * twod_arr1[k][j];
            }
       } 	
    //    cout<<endl;	 	
    }
    




// 2d matrix sum;

    // for(int i = 0 ; i<2 ; i++ ){
    //    for(int j = 0 ; j< 3 ; j++){
           
    //         twod_arr[i][j] = twod_arr[i][j] + twod_arr1[i][j];
    //     //    int sum = twod_arr[i][j] + twod_arr1[i][j];
    //     //   cout<<sum<<" ";
    //    } 	
    //    cout<<endl;	 	
    // }



cout<<"Matrix representation: \n";
    for(int i = 0 ; i<2 ; i++ ){
       for(int j = 0 ; j< 3 ; j++){
        cout<<"["<<twod_arr[i][j]<<"]";
       } 	
       cout<<endl;	 	
   }




    // for(int i = 0 ; i<2 ; i++ ){
    //    for(int j = 0 ; j< 3 ; j++){
           
    //         twod_arr[i][j] = twod_arr[i][j] + twod_arr1[i][j];
          
            
    //    } 	
    //    cout<<endl;	 	
    // }
    


                
    return 0;

}