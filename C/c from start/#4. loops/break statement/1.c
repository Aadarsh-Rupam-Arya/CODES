#include<stdio.h>
int main()
{
int a;


for (int i ; i <= 100000000 ; i++ ){

    printf("enter a no : ");
    scanf("%d", &i);

    if (i % 2 != 0){
        break;
            }

    printf("%d \n",i);
}




    return 0;
}