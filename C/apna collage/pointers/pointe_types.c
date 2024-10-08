#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int *a;

    a = malloc(500 * sizeof(int));

    printf("%d", sizeof(a));
            

    return 0;
}

