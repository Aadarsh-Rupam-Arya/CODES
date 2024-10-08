#include <conio.h>
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    // int *ptr = 34 ;
    // printf("%d",ptr);

    int a = 4, b = 5;
    swap(&a, &b);

    printf("a: %d\n", a);
    printf("b: %d", b);

    return 0;
}
