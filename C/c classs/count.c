#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int len(char* str) {
    int i; 
    int count = 0; 

    for (i = 0 ; str[i] != '\0' ; i++ ){
        count++; 
        return count;

    }	
}              
int main()
{
    char str[20]= "Adsafasfaf";

    int lenk = len(str);

    printf("the leng is %d ",lenk);
    	 	   
                
    return 0;
}