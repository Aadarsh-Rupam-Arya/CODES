#include <stdio.h>

int main()

{
    int age;
    printf("enter your age: ");
    scanf("%d",&age);



    switch (age)
    {
    case  1:
        printf("value is 2");
        break;
    
    case 3 :
        printf("value is 3") ;
        break;
    
    case 4 :
        printf("value is 4") ;
        break;

    case 5 :
        printf("value is 5") ;
        break;

    default:
        printf("nothing is matched\n");
        break;
    }

}
