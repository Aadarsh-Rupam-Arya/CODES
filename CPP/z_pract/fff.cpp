
#include<iostream>
#include<string.h>
using namespace std;

void shift(int *x,int *y,int *z){
int temp1 = *x;
int temp2= *y;
int temp3= *z;
*x = temp3 ;
*y = temp1 ;
*z = temp2 ;
}               

void shf(int *x, int l){
    int temp1 = *x;
    *x = l;
    }              

int main()
{
    		 	
int x , y ,z ;

cin>>x>>y>>z;

cout<<"Before Shift: x: "<<x<<" y: "<<y<<" z: "<<z<<endl;
// int temp = x;
// y = &x ;
// z = &y ;
// x = &z ;

shift(&x,&y,&z);
int up ;
cin >> up;

cout<<"After Shift: x: "<<x<<" y: "<<y<<" z: "<<z<<endl;
shf(&x,up);
cout<<"After modf: x: "<<x<<" y: "<<y<<" z: "<<z<<endl;

if (x>y && x>z){
    cout << "The largest value among x, y , and z is: "<<x << endl;
}

else if (z>y && z>x){
    cout << "The largest value among x, y , and z is: "<<z << endl;
}

else {
    cout << "The largest value among x, y , and z is: "<<y << endl;
}

                
                
    return 0;
}