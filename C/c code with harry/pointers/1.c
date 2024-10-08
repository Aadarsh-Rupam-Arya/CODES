#include <conio.h>
#include<stdio.h>
                
int main()
{
    int i = 34 ;
    int *j = &i ;

    printf("val of i : %d\n",i);

    printf("val of i : %d\n",*j);	 	

    printf("add of i : %u\n",&i);   

    printf("add of i : %u\n",j); 

    printf("add of j : %u\n",&j);  

    printf("val of j : %d\n",*(&j));	 	
    
    return 0;

}