#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    FILE *fptr = NULL ;
    char str[150] = "this file now contains new elements and old are deleted.\n";
    char new_str[150] = "After appending we get this more.";



    // ***** Reading a file *************

    // fptr = fopen("new.txt","r");
    // fscanf(fptr, "%s" , &str);
    // printf("The file contains: %s" , str);


    // ***** writting in a file  ********** 

    fptr = fopen("new.txt","w");
    fprintf(fptr , "%s" , str);


    fclose(fptr);
    // ***** appending in a file  ********** 

    fptr = fopen("new.txt","a");
    fprintf(fptr , "%s" , new_str);









    fclose(fptr);


                
                
    return 0;
}