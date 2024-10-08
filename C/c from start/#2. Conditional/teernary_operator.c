#include<stdio.h>
int main()
{

    // ternary orepator

    int age;
    printf("enter age: ");
    scanf("%d",&age);

    (age>18)? printf("adult") : printf("kid");     


    return 0;
}