#include<stdio.h>
int main()
{
    int a , b;

    printf("enter start: ");
    scanf("%d",&a);

    printf("enter end: ");
    scanf("%d",&b);
    int sum = 0;

    for (int i=a ; i<=b ; i++){
        if (i<b){
            printf("%d + ", i);
        sum += i;
    }
    else if (i==b){
            printf("%d = ", i);
        sum += i;
    }
    }
                
    printf("%d", sum);

    return 0;
}