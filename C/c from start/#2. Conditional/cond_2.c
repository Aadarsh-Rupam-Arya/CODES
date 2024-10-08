#include <stdio.h>

int main()
{
    int age;

    printf("enter your age: ");

    scanf("%d",&age);

    printf("you have entered %d as your age\n",age);
    if (age>=18 & age<=64)
    {
        printf("You can vote");
    }
    else if (age>=65)
    {
        /* code */
        printf("you are over age");
    }
    
    else{
        printf("You cannot vote");
    }

    return 0;


}
