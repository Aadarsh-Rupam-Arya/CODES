#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int *ptr ;
    int n = 5 ;

    ptr = (int*) calloc(7,sizeof(int));   // if the value is not given it automatically inserts 0 as the value 
    
    for (int i = 0 ; i < 5 ; i++ ){
        scanf("%d",&ptr[i]);

    }
    for (int i = 0 ; i  < 7 ; i++ ){
        printf("%d\n",(ptr+i));

    }
    
    for (int i = 0 ; i  < 7 ; i++ ){
        printf("%d\n",ptr[i]);

    }

          
                
    return 0;
}