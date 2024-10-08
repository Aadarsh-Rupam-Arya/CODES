#include <conio.h>
#include<stdio.h>

int star(int n){
    for (int i = 0 ; i < n ;  i++ ){
        for (int j = 0 ; j <= i ; j++){
            printf("* ");

        }
        printf("\n");

    }
}


int revstar(int n){
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j <= n-i-1 ; j++){
            printf("* ");
        }
        printf("\n");
    }
}


int main()
{
    		 	
    int rows = 5 ;


    star(rows); 
    printf("\n");

    revstar(rows);

                
    return 0;
}