#include <conio.h>
#include<stdio.h>
int temp(int l );

int main()
{
    int a ;
    printf("enter temp in celcius : ");
    scanf("%d",&a);

    printf("the temp in farahanite is : %d",temp(a));		 	
                
                
    return 0;
}

int temp(int l ){
    return (l*9/5)+32;

}
