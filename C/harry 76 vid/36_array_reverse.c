#include <conio.h>
#include<stdio.h>
#include<string.h>

void reverse(int arr[],int l){
        puts("array before reverse is : ");
    for(int i = 0 ; i < l ; i++){
        printf("%d ",arr[i]);
    }
    
       
    for( int i = 0; i < l/2  ; i++){
        int f = arr[i];
        int s = arr[l-i-1];

        arr[i]= s ;
        arr[l-i-1]= f;

    }
    puts("\narray after reverse is : ");
    for(int i = 0 ; i < l ; i++){
        printf("%d ",arr[i]);
    }

    
    
   }

int main()
{
   int array[] = {45,4,22,54,5,3,4};
    
    int length = sizeof(array)/sizeof(array[0]);


    reverse(array,length);

    return 0;
}