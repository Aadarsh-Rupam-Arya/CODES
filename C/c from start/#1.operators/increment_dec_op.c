#include<stdio.h>
int main()
{
int i=1;
int k=9;

  //  i++ operator is use to increment the value by 1 like we do i=i+1  
  //  i-- operator is use to decrement the value by 1 like we do i=i-1  

    printf("%d \n",i++); // use ,then  increment       
    printf("%d \n",i);

    printf("%d \n",i++); // increment , then use 
    printf("%d \n",i);

    printf("%d \n",k--); // use ,then  decrement       
    printf("%d \n",k);
                
    printf("%d \n",--k); // decrement , then use 
    printf("%d \n",k);
             
    return 0;
}