#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    char str[63] = "hello";
    
    int size = sizeof(str)/sizeof(str[0]);

    printf(
        "size %d\n",size
    );

int count = 0 ;
    for (int i = 0 ; str[i] != '\0' ; i++){
        
        count++ ;

        printf("%c ",str[i]);
    }
    printf("\nLengnth of the string %d\n",count);

                        
    return 0;
}