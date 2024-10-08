#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a ;
    scanf("no of ele %d",&a);

    int arr[a];

    for (int i = 0 ; i < a ; i++ ){
        scanf("enter = %d",&arr[i]);
    }	
   	
    for (int i = 0 ; i < a ; i++ ){
        printf("value = %d\n",arr[i]);
    }	
   
                
                
    return 0;
}
 