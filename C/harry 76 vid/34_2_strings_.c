#include <conio.h>
#include<stdio.h>

void printstr(char str[]){
    for(int i = 0 ; str[i] != '\0'; ++i){
        printf("%c\t",str[i]);

    }
}


int main()
{

    char str[] = {'h','a','r','r','y','\0'};  // if the string array is written in this format we have to write the null character 
    printstr(str);
    printf("\n");

    // but for the simple sting we need not to specify the null character  =  '\0'

    // ex 

    char str1[30];

    gets(str1);

    printstr(str1);
       
                
    return 0;
}