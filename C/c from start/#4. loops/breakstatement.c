#include<stdio.h>
int main()
{
for (int i = 3; i<= 50 ; i++ )           
     {
        if (i==10){ 
            break;   // it will end the loop when the conditon will be satisfied

        }
        
         printf("%d\n",i);
     }           
                
    return 0;
}