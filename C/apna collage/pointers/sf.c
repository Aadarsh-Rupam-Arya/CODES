#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a = 5 ;

    for (int i = 1 ; i<=a ; i++){
        for (int j = 1 ; j<=i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i = 5 ; i>=1 ; i--){
        for (int j = 1 ; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }		 	
                
                
    return 0;
}