#include<stdio.h>
int main()
{
    
    char day ;

    printf("enter the day: ");

    scanf("%c", &day);

    printf("the day is %c",day);

    switch (day)
    {
        
        case 1:
            printf("monday");
            break;
    
        case "t" :
            printf("tuesday"); 
            break;

        case "w":
            printf("wednesday");
            break;
    
        case "T" :
            printf("thrusday"); 
            break;  
    
        case "f" :
            printf("friday"); 
            break;

        case "s":
            printf("saturday");
            break;
    
        case "S" :
            printf("sunday"); 
            break; 

        default:
            printf("you enterd wrong input");
            break;
    }









    return 0;
}