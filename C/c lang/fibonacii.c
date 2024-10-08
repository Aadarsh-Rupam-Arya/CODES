#include<stdio.h>
int main()
{
int f=0, s=1;
int nx , n ;

printf("enter end n vale: ");
scanf("%d", &n);


printf("%d \t %d ", f, s);

while(n!=0){
    nx=f+s;
    printf("\t %d", nx);
    f = s;
    s =nx;
    n--;

}

    return 0;
}




