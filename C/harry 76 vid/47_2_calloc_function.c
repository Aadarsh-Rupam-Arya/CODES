#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
                
int main()
{

    // calloc function 

    int *ptr ;
    int n ;

    printf("Enter the size of the array you want: ");
    scanf("%d",&n);

    ptr = (int*)calloc(n,sizeof(int));

    for(int i = 0 ; i < n ; i++ ){
        printf("Enter the value of %d of the array : ",i);
        scanf("%d",&ptr[i]);
    }

    for(int i = 0 ; i < n ; i++ ){
        printf("The value at %d of the array is %d \n",i,ptr[i]);
    }

    		 	
                
                
    return 0;
}