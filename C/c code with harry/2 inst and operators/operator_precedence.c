#include<stdio.h>
                
int main()
{
    int x = 2 , y = 3;

    printf("3x - 8y = %d\n",3*x-8*y);

    printf("8y / 3x = %d\n",8*y/3*x);
                
    // here no bodmaan will come 

    // priority of operators is :

               // 1)    * / %
               // 2)     + -
               // 3)      = 


    // we will go to left to right 
/*
   
    like above we got :  

        8 * 3 / 3 * 2 = 16 
        but acc to rule it should be 
                : 24 / 6 = 4 
                but this is wrong 

        here we use :

        associavity 

        we go left to right for same priority order 

        like
        8 * 3 / 3 * 2 

        24 / 3 * 2 

        8 * 2 

        ans = 16

 
        property used is 

        like 

        x * y / z ==   (x * y) / z

        x / y * z ==   (x / y) * Z 
         


  */      
    return 0;
}