#include<stdio.h>
int main()
{
    char ch;
    printf("enter char: ");

    scanf("%c",&ch) ;

    if (ch>= "A" && ch<= "Z")
    {
        printf("Upeer case");
    }
    else if (ch>="a" && ch<="z")
    {
        printf("Lower case");       /* code */
    }
    else{
        print("not eng");
    }
    

    return 0;
}