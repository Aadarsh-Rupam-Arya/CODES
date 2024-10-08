#include<stdio.h>
                
int main()
{
    int i = 1 ;
    int k ;
    printf("enter no : ");
    scanf("%d", &k );

    do {
        printf("%d X %d  = %d\n", k , i , k*i );
        i++;
    }while(i<11);

                
                
    return 0;
} 