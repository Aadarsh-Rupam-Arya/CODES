#include<iostream>
#include<string.h>
using namespace std;

void update(int arr[]){
    arr[3] = 45;
}

int main()
{
   
    int arr[5]= {3,5,1,6,7};

    cout<<"arr bfr update : "<<endl;
for(int i = 0 ; i < 5 ; i ++){
    cout<<arr[i]<<" ";

}
cout<<endl;
    cout<<arr[3]<<endl;
    arr[3]= 56;
    cout<<arr[3]<<endl;

    update(arr);
    cout<<arr[3]<<endl;

     cout<<"arr aftr update : "<<endl;
for(int i = 0 ; i < 5 ; i ++){
    cout<<arr[i]<<" ";


}
cout<<endl;


                
                
    return 0;
}