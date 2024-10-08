#include <conio.h>
#include<stdio.h>
                
int main()
{
    char fname[20] = "AADARSH";
    

    int i ; 
    printf("\n Before operation fname = %s",fname);
    int ffname;
    for (i = 0; i < strlen(fname) ; i++);
    {
        fname[i]= fname[i] + 32 ;
        fname[i]== ffname;

    }
    printf("\n After operation fname = %s",fname);
  
    return 0;
}
