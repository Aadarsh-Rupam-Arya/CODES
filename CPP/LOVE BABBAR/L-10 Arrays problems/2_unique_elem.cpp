#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    // int n ;
    // cin>>n;
    int k;
    int arr[7]= {4,2,3,6,4,3,2};
    for(int i = 0 ; i<7; i++ ){
    int k = arr[i];
            	if(k==arr[i]){
                    continue;
                }
                else{
                    cout<<arr[i]<<endl;
                }
    }		 	          
    return 0;   		 	
}
