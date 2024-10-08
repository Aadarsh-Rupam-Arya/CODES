#include <stdio.h>

int main()
{
    int i, index = 0;
    printf("enter a num: ");
    scanf("%d", &i);

    do
    {

        printf("%d\n", index);
        index = index + 1;

    } while (index < i);

        return 0;

}