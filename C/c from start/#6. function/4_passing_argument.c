#include<stdio.h>
#include<conio.h>

// void write();
// void sum(int a, int b);
int mul(int i);
int m(int l);      

int main()
{
    // void write();

    // void write(int i );

    // void write(int a, int b);

    int k , g;

    mul(k);
    // printf("csjs");
    printf("%d",m(g));



}

int mul(int i)
{
    printf("enter no: ");
    scanf("%d",&i);
    printf("%d X 10 = %d\n",i,i*10);
    return 0;

   
}

int m(int l ){
    printf("enter no: ");
    scanf("%d",&l);
    // printf("%d",l*10);
    // return 0;
    return l*10;
}

