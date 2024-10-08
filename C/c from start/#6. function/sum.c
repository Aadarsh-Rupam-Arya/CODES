#include<stdio.h>
int sum(int x , int y);         
int main()
{
    		 	
    int a, b ;

    printf("enter no a: ");
    scanf("%d",&a);
    printf("enter no b: ");

    scanf("%d",&b);

    printf("the sum is : %d",sum(a , b)); 

                
    return 0;
}

int sum(int x, int y){
    
    return x + y ;
}