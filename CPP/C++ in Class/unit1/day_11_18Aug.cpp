// #include<iostream>
// #include<string.h>
// #include<iomanip>
// using namespace std;
                
                

// int main()
// {
//     int x = 4 ;
//     float y = 5.232321;
    
//     cout<<setw(5)<<x<<endl;
//     cout<<setfill('*')<<setw(5)<<x<<endl; 
//     cout<<"Setprecision: "<<fixed<<setprecision(3)<<y<<endl;

    

//     char n[20] ;
//     ws(cin);
//     cin>>n;
//     char m[20] ;
//     ws(cin);
//     cin>>m;
//     cout<<n<<m;          

   

               

//     return 0;

// }


#include<iostream>
#include<string.h>
using namespace std;
                
                

int main()
{

    int arr[10] ;
    int arru [10];
    for(int i = 0 ;i< 10 ; i++){
      arr[i] = i+2;
        arru[i] = arr[i]; 
    }
    int one = 2;
    for(int i = 0 ; i< 5 ; i++ ){

        arr[i] = one ;
        one +=2 ;
        		 	
    }	
    cout<<"Element\tValue\n";	 	

        for(int i = 0 ; i<10 ; i++ ){
            cout<<arr[i]<<"\t"<<arru[i]<<endl;		 	
        }       



    

    return 0;
}
