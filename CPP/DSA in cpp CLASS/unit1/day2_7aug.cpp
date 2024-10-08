#include<iostream>
#include<string.h>
using namespace std;
void traverse();
int main()
{
    		 	
    //   1)      // cout<<23+5;

    // 2) 
    //  cout<<1716+(4*(42-25)); 

    // 3)
    // int x[5] ;
    // x[0] = 5 ;
    // x[1] = 3 ;
    // x[2] = 5 ;
    // x[3] = 3 ;
    // x[4] = 9 ;
    // x[10] = 76 ;


    // cout<<x[0]<<endl;
    // cout<<x[1]<<endl;
    // cout<<x[2]<<endl;
    // cout<<x[3]<<endl;
    // cout<<x[4]<<endl;
    // cout<<x[10]<<endl;

    // cout<<"Adress\n";

    // cout<<&x[0]<<endl;
    // cout<<&x[1]<<endl;
    // cout<<&x[2]<<endl;
    // cout<<&x[3]<<endl;
    // cout<<&x[4]<<endl;
    // cout<<&x[10]<<endl;

    // cout<<sizeof(x);
    
    // here the compile dosent show any error;


    // 4)

    // array traversal;

    
    
        // int n ;
        // cin>>n;

        // int arr[n] ;
        // for (int i = 0; i < n; i++)
        // {
        // cin>>arr[i];
        // }
        // cout<<"forward: ";
        // for(int i = 0 ; i<n ; i++ ){
        //     cout<<arr[i]<<" ";
        // }
        // cout<<"\nbackward: ";
        // for(int i = n ; i>=0 ; i-- ){
        //     cout<<arr[i]<<" ";
        // }

    // 5)
    //initilisiation error;

        // int c [ 5 ] = {3,2,2,43,4,5};


    // 6)

    //default value;

    // int c [ 5 ] = {3,2,5};

    // for(int i = 0 ; i<5 ; i++ ){
    //     		cout<<c[i]<<" ";	
    // }

    // 0 is the default value whent the elements are not defined in the array;


    // 7)

    // traverse arrrays;






    // 8)

    // insertion algo


// insert at end;

    int arr[10] ;
    int n ,counter = 0;

    cout<<"enter the no of elem : ";
    cin>>n;
    cout<<"enter element:  ";

    for(int i = 0 ; i < n  ; i++)
{
    cin>>arr[i];
    counter++;
}

cout<<"array is : ";

for(int i = 0 ; i<n ; i++ ){
    	cout<<arr[i]<<" ";	 	
}
cout<<endl;

// int ins;
// cout<<"Enter no of elem to be inserted: ";
// cin>>ins;

// int d = counter;
// for(int i = counter ; i<d+2;i++){
//     cin>>arr[i];
    
// }

cin>>arr[counter++];
cin>>arr[counter++];



cout<<"New array: ";
for(int i = 0 ; i<counter ; i++ ){
    	cout<<arr[i]<<" ";	 	
}
cout<<endl;


// insert at begin ;

    




















        return 0;
    }
                
 
