#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    char str[100];

    char st ;

    int i = 0 ;

    while(st!='\n'){
        scanf("%c",&st);
        str[i] = st;
        i++;

    }		 	
        puts(str);        
                
    return 0;
}