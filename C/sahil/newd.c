#include <conio.h>
#include<stdio.h>
                
int main()
{
    int r , c;
    printf("enter no of row : ");
    scanf(("%d",r));

    printf("enter no of col : ");
    scanf(("%d",c));

    for (int i = 0 ; i <= r ; i++ ){
        for ( int j = 0 ; j <= c ; j ++ ){
            printf("*");
        }
    }		 	
                
                
    return 0;
}