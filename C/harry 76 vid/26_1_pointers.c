#include <conio.h>
#include<stdio.h>
                
int main()
{
    int a = 45 ;
    int *prt_a = &a ;

    printf("%d\n",a);		 	
    printf("%d\n",prt_a);
    printf("%d\n",*prt_a);
    printf("%d\n",&a);
    printf("%d\n",*(&a));
    

    return 0;
}


