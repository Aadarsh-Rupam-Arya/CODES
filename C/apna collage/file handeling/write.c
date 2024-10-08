#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    char input[100];

    FILE *fptr ;
    fptr = fopen("newtextforwrite.txt","w");

    fprintf(fptr,"%s","Hello my name is aadarsh.\n");		 	
    fputs("i am studying cse.\n",fptr);            
    fclose(fptr);   

    fptr = fopen("newtextforwrite.txt","r");
    fscanf(fptr,"%s",&input);
    printf("%s ",input);
    fscanf(fptr,"%s",&input);
    printf("%s ",input);
    fscanf(fptr,"%s",&input);
    printf("%s ",input);


    fclose(fptr);


    return 0;
}