#include <conio.h>
#include<stdio.h>
                
int main()
{
    char fname[20] = "Pramod";
    char mname[6] = {'K','u','m','a','r','\0'};
    char lname[] = "Gupta";


    char* nptr = "LPU" ; 

    printf("\n %s",fname);
    printf("\n %s",mname);
    printf("\n %s",lname);


    printf("\n %d",strlen(fname));
    printf("\n %d",strlen(mname));
    printf("\n %d",strlen(lname));
  
    return 0;
}