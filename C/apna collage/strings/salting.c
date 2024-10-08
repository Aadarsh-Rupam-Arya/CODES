#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int salting(char pass[]){
    char salt[]= "123";

    strcat(pass,salt);

    printf("%s",pass);

    return 0;
    
}

int main()
{
		 	
    char password[100];

    scanf("%s",&password);

    salting(password);

   

                
    return 0;
}