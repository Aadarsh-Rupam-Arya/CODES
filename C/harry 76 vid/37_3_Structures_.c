#include <conio.h>
#include<stdio.h>
#include<string.h>

struct student 
{
    int age ;
    int marks ;
    char name[40] ;

} ravi , shyam , ram;

// struct student ravi , shyam ;

int main()
{

    ravi.age = 34 ;
    ravi.marks = 100 ;
    shyam.age = 45;  
    shyam.marks = 95;
    

    strcpy(ravi.name , "Ravikant Rathor");
    strcpy(shyam.name , "Shayam lal singh");
    

    printf("The age of ravi is : %d\n",ravi.age);
    printf("The age of shyam is : %d\n",shyam.age);
    printf("The marks of ravi is : %d\n",ravi.marks);
    printf("The marks of shyam is : %d\n",shyam.marks);
    printf("Full name of ravi is : %s\n",ravi.name);
    printf("Full name of shyam is : %s\n",shyam.name);


    return 0;
}
