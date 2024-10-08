#include <conio.h>
#include<stdio.h>
                
int main()
{
    // pointer arethimitic 

    
    int a = 4 ;
    int *ptr_a = &a ;
    printf("%d\n",ptr_a);
    printf("%d\n",ptr_a+2);

    char ch = '#';
    
   char  *ptr_ch = &ch ;
    printf("%d\n",ptr_ch);
    printf("%d\n",ptr_ch+2);

          
    return 0;
}