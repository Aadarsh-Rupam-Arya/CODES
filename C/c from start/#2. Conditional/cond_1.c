#include <stdio.h>

int main()
{
    int age;

    printf("enter your age: ");

    scanf("%d",&age);

    printf("you have entered %d as your age\n",age);
    if (age>=18)
    {
        printf("You can vote");
    }
    else{
        printf("You cannot vote");
    }

    return 0;




 
}
