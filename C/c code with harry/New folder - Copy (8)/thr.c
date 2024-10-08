#include <conio.h>
#include<stdio.h>
                
int main()
{
    // int a = 1  ;
    // int x ;

    // scanf("%d",&x);
    

    // do{
    //     a++;
    //     printf("%d X %d = %d\n",x,a,x*a);

    // }while(a<10);

    // while(a<=10){
    //     printf("%d X %d = %d\n",x,a,x*a);
    //     ++a;

    // }

    // for (a ; a<=10 ; a++ ){
    //         printf("%d X %d = %d\n",x,a,x*a);
    // }

    int r ,c, p , q ;
    printf("enter the no of rows : ");
    scanf("%d",&r);
    char k = '*';

    printf("enter the no of col : "); 
    scanf("%d",&c);

   

    for (p = 0 ; p< r ; p++){
        for (q = 0 ; q<c ; q++){
            printf("*");

        }
        printf("\n");
    }
        
    return 0;

}

