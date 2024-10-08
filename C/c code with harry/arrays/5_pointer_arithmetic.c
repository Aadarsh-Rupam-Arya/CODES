#include <conio.h>
#include<stdio.h>
                
int main()
{
    int i = 34 ;

    int *ptr = &i ;
printf("For an integer value : ");
    printf("the val of ptr is %u\n",ptr);

    ptr++;  // so here the address or value of adress increase according to the bytes that is "4" 
    // ptr++;

    // first there was "6422296"
    // now after the arthimitc operation the value will increse by 4 which is place of integer 

    printf("the val of ptr is %u\n",ptr);

    // same for decrementing also it will work accordingly 


   //  but for a char value 

printf("for a char value: \n");
   // ex -

    char m = 34 ;

    char *ptrchr = &m ;

    printf("the val of ptr is %u\n",ptrchr);

    ptrchr++;  // so here the address or value of adress increase according to the bytes that is "1" 
   
   
    printf("the val of ptr is %u\n",ptrchr);


int l = 34;
int *ty = &l ;

printf("the vlau of ptr is : %d",ty );




    return 0;
}