#include<stdio.h>
int main()
{
    
    int age ;

    printf("enter the age: ");
    scanf("%d",&age);

    switch (age)
    {
    case 1:
        printf("one");
        break;
    
    case 2 :
        printf("two"); 
        break;

    case 3:
        printf("three");
        break;
    
    case 4 :
        printf("four"); 
        break;  

    default:
        printf("you enterd wrong input");
        break;
    }









    return 0;
}