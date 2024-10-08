#include <conio.h>
#include<stdio.h>

void mul(int m);

               
int main()
{

int a;
    printf("Enter the table no : ");
    scanf("%d",&a);

    mul(a);      
                
    return 0;
}

void mul(int m ){
    for (int i = 1 ; i<=10 ; i++){
        printf("%d X %d = %d\n",m,i,m*i);
    }

}