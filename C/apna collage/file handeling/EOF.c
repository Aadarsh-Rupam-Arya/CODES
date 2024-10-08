#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


int main()
{


    FILE *fptr ;
    fptr = fopen("newtextforwrite.txt","w");

    fprintf(fptr,"%s","Hello my name is aadarsh.\n");		 	
    fputs("i am studying cse.\n",fptr);  

    

    fptr = fopen("newtextforwrite.txt","r");

    char ch = fgetc(fptr);
    
    while (ch!=EOF) 
    {
        printf("%c",ch);
        ch = fgetc(fptr);
    }



    fclose(fptr);



    


 	
                
                
    return 0;
}