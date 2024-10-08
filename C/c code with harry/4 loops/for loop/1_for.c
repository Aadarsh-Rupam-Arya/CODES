#include<stdio.h>
                
int main()
{
    int k ;
    printf("enter no : ");
    scanf("%d",&k);
    for (int  i=1 ; i <= 10 ; i++ ){
        printf("%d X %d = %d \n",k , i , i *k);
    }		 	
                
                
    return 0;
}