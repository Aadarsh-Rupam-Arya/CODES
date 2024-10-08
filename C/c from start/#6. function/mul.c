#include<stdio.h>
int mul(int p , int q);              
int main()
{
    int a ;
    int b ;

    printf("enter a: ");
    scanf("%d",&a);
                
    printf("enter b: ");
    scanf("%d",&b);

    printf("%d",mul(a,b));


                
    return 0;
}

int mul(int p , int q){
    return p*q;
}
