#include <conio.h>
#include<stdio.h>
                
int main()
{
    int a ;

    int i , n , c	;

    printf("enter a no : ");
    scanf("%d",&a);

    int marks[a];


    for(i=0 ; i<a ; i++ ){
        printf("enter your input %d : ",i+1);
        scanf("%d",&marks[i]);
    
    }
    for (c = 0 ; c<a ; c++ ){
    printf("your marks are in %d : %d\n",marks[c]);

    }
                    
                
    return 0;
}