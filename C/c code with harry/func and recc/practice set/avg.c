#include <conio.h>
#include<stdio.h>
int avg(int a, int b , int c){
    return (a+b+c)/3;

}               
int main()
{
    int k , l , m ;

    printf("enter value of k : ");
    scanf("%d",&k);

    printf("enter value of l : ");
    scanf("%d",&l);

    printf("enter value of m : ");
    scanf("%d",&m);


    printf("%d",avg(k,l,m));

    
                
                
    return 0;
}


