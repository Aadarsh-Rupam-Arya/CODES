#include <conio.h>
#include<stdio.h>
                
int main()
{
    // just practice ;


    char str[20];

    printf("Enter a string: ");
    scanf("%s",&str);

    for(int i = 0 ; str[i]!='\0';i++){
        if (str[i]!=' '){
            printf("%c\n",str[i]);

        }
    }

    return 0;
}