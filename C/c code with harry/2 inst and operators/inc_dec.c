#include<stdio.h>
                
int main()
{

    int a = 0 , b = 5 ;

    a= --b + --b + --b ;

    printf("a : %d\n", a );
    printf("b : %d", b );

                
                
    return 0;
}