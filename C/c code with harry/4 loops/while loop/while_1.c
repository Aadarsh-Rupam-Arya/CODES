#include <conio.h>
#include<stdio.h>
                
int main()
{
    int a ; 
    scanf("%d",&a);


    int l = 1 ;

    while(l<=10){
        printf("%d X %d = %d\n",a , l , a*l);
        l++;
    }

    int m ; 
    scanf("%d",&m);
    int li = 1 ;

    do{
        printf("%d X %d = %d\n",m,li,m*li);
        li++;

    }while(li<=10);	 

                
                
    return 0;
}