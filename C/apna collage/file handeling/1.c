#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    FILE *fptr ;

    fptr = fopen("text.txt","r");
    if (fptr==NULL){
        printf("The file dosent exist\n");
    }
    else{
        char ch[500] ;
        int num;

        // fscanf(fptr,"%s",&ch);
        
        // printf("The chars are %s\n",ch);
        // fscanf(fptr,"%s",&ch);
        
        // printf("The chars are %s\n",ch);
        // fscanf(fptr,"%s",&ch);
        
        // printf("The chars are %s\n",ch);
        
        // fscanf(fptr,"%s",&ch);
        
        // printf("The chars are %s\n",ch);
        // fscanf(fptr,"%s",&ch);
        
        // printf("The chars are %s\n",ch);
        // fscanf(fptr,"%s",&ch);
        
        // printf("The chars are %s\n",ch);
        
        fscanf(fptr,"%d",&num);
        // fscanf(fptr,"%d",&num);
        // fscanf(fptr,"%d",&num);
        fscanf(fptr,"%d",&num);
        printf("The mums are %d\n",num);
        printf("The mums are %d\n",num);
       
        

    }
    fclose(fptr);

                
                
    return 0;
}