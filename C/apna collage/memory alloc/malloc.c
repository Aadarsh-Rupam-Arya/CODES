#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int *ptr ;
    int n = 5 ;

    ptr = (int*) malloc(5*sizeof(int));

    // printf("%d\n",ptr);

    // printf("%d\n",ptr);

    // printf("%d\n",ptr);

    for (int i = 0 ; i < 5 ; i++ ){
        scanf("%d",&ptr[i]);

    }
    for (int i = 0 ; i  < 5 ; i++ ){
        printf("%d\n",(ptr+i));

    }
    
    for (int i = 0 ; i  < 5 ; i++ ){
        printf("%d\n",ptr[i]);

    }

                
                
    return 0;
}