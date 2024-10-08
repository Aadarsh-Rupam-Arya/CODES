#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    FILE *fptr ;

    fptr = fopen("sum_text.txt","w");
    int a , b ;

    fscanf(fptr , "%d", &a);
    fscanf(fptr , "%d", &b);

    printf("%d\n",a);
    printf("%d\n",b);
    
    fclose(fptr);
                
                
    return 0;
}