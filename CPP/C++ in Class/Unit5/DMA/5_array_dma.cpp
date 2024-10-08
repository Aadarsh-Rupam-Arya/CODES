
#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
                
                

int main()
{
    long *arr ,*sum ;

    int size;

    cout<<"Enter size of Arr : ";
    cin>>size;

    sum = new long;
    arr = new long[size];
    
    *sum=0;
    
    if(arr != NULL || sum!=NULL){
        cout<<"Memory alloted"<<endl;
    }    
    else{
        cout<<"Problem in alloting memory"<<endl;
    } 

    cout<<"Enter elements of array: "<<endl; 


    for(int i = 0 ; i< size ; i++){
        cin>>arr[i];
        
    }
    
    cout<<*sum<<endl;
    for(int i =0 ; i< size ; i++){
        *sum = *sum + arr[i];
    }

    cout<<"Sum of elements of array is : "<<*sum<<endl;
    
    return 0;
}



// #include<iostream>
// #include<string.h>
// #include<fstream>
// using namespace std;
                
                

// int main()
// {
//     int *arr ,*sum ;

//     int size;

//     cout<<"Enter size of Arr : ";
//     cin>>size;

//     sum = new int;
//     arr = new int[size];

//     if(arr != NULL || sum!=NULL){
//         cout<<"Memory alloted"<<endl;
//     }    
//     else{
//         cout<<"Problem in alloting memory"<<endl;
//     } 

//     cout<<"Enter elements of array: "<<endl; 


//     for(int i = 0 ; i< size ; i++){
//         cin>>arr[i];
        
//     }
//     *sum=0;
//     for(int i =0 ; i< size ; i++){
//         *sum = *sum + arr[i];
//     }

//     cout<<"Sum of elements of array is : "<<*sum<<endl;


                
//     return 0;
// }