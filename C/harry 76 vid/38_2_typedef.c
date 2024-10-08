#include<conio.h>
#include <stdio.h>
#include <string.h>

typedef struct student
{
    int id;
    int marks;

} std ;

int main()
{
    // struct student harry, ravi, subham;
std harry;
    harry.id = 1;
    harry.marks = 34;
    
    std ram ;

    ram.id = 3 ;
    ram.marks = 53;

   printf("%d\n",(ram.id));
   printf("%d\n",(ram.marks));

    printf("harry's id is %d \n", harry.id);
    printf("harry got %d marks \n", harry.marks);

    return 0;

}