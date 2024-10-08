#include<stdio.h>
int main()
{ 
    int a ;
printf("Enter no for the table you need: ");
    scanf("%d",&a);
    for (int k=1 ; k<=10 ; k++ )
{
    printf("%d X %d = %d \n",a,k,a*k);
}       
                
    return 0;
}