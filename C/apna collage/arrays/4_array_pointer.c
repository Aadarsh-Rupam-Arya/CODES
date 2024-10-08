#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
   int a ; 
   puts("Enter the no of values in arrays : ");
   scanf("%d",&a);
    int arr [a] ;

    int *ptr = arr;
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0 ; i < size ; i++){
        printf("enter the value at %d : ",i);
        scanf("%d",&arr[i]);
    }


    for(int i = 0 ; i < size ; i++){
        if (i==0)
        printf("the array is : [%d,",*ptr++);
        else if (i==size-1)
        printf("%d]",*ptr++);
        else
        printf("%d,",*ptr++);
    }	 

         puts("\nthe reversal of the array is : ");
           
    for(int i = size-1 ; i >=0 ; i--){
      
        if (i==size-1)
        printf("the array is : [%d,",&ptr[i]);
        else if (i==0)
        printf("%d]",&ptr[i]);
        else
        printf("%d,",&ptr[i]);
        // printf("%d ",arr[i]);
    }
                
    return 0;
}