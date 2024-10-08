#include <conio.h>
#include<stdio.h>

void star(int r , int c){
    for (int i = 0 ; i < r ; i++ ){
        for (int j = 0 ; j < c ; j++ ){
            printf("*");
        }
        printf("\n");
    }
}



int main()
{
    int r , c ;
   printf("Enter the no of rows : ");
   scanf("%d",&r);
                
   printf("Enter the no of columns : ");
   scanf("%d",&c);


   star(r,c);
   
                
    return 0;
}