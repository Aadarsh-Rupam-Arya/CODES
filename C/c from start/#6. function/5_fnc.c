#include<stdio.h>

int fact(int n); 
int main()
{
    int l ;
    printf("enter the no which fact you need : ");
    scanf("%d", &l);
    printf("fact is : %d", fact(l))    ; 

    return 0;
}

int  fact (int n ){
    int sum = 1;
    for (int k= 1; k<=n; k ++ ){
        sum = sum * k ;

    }
        return sum ;
}