#include<iostream>

using namespace std;
                
                

int main()
{
    int *p = new int ;
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n ; i++ ){
    	cin>>arr[i];	 	
    }  
    int poss = 0 , neg = 0 , zero = 0 ;
    for(int i = 0 ; i<n ; i++ ){
    	if(arr[i] > 0){
            poss++;
        }
        else if(arr[i] < 0){
            neg++;
        }
        else{
            zero++;
        }
    }  
    cout<<poss<<endl;
    cout<<neg<<endl;
    cout<<zero<<endl;
    delete p ;	 	
                
                
    return 0;
}