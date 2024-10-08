#include <conio.h>
#include <stdio.h>

int main()
{
    char str[6] = "Harry";
    char tr[] = {'H', 'a', 'r', 'r', 'y', '\0'}; // here the '\0' this represent the null character that the string is being end ;

    printf("%s\n",str);
    printf("%s",tr);

    // char str[50];
    // printf("enter a string: ");
    // gets(str);

    // printf("%s\n", str);
    // puts(str);

    return 0;
}