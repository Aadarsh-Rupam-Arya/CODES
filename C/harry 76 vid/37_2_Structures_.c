#include <conio.h>
#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    int marks;
    char fav_car[30];

};  // harry ,ravi , subham ;
struct student harry, ravi, subham; // this will act as a global variable

int main()
{
    // find the details by entering the names ;
    // struct student harry, ravi, subham; // this will act as a local variable

    harry.id = 1;
    harry.marks = 34;
    strcpy(harry.fav_car, "Lamborghini");

    ravi.id = 2;
    ravi.marks = 56;
    strcpy(ravi.fav_car, "ferari");

    subham.id = 3;
    subham.marks = 78;
    strcpy(subham.fav_car, "rangerover");

    int enter;
    printf("Enter 1 for harry 2 for ravi and 3 for subham: ");
    scanf("%d", &enter);

    if (enter == 1)
    {

        printf("harry id is %d\n", harry.id);
        printf("harry got %d marks \n", harry.marks);
        printf("harry's fav car is %s \n", harry.fav_car);
    }
    else if (enter == 2)
    {

        printf("ravi id is %d\n", ravi.id);
        printf("ravi got %d marks \n", ravi.marks);
        printf("ravi's fav car is %s \n", ravi.fav_car);
    }
    else if (enter == 3)
    {

        printf("subham id is %d\n", subham.id);
        printf("subham got %d marks \n", subham.marks);
        printf("subham's fav car is %s \n", subham.fav_car);
    }
    else
    {
        printf("invalid");
    }

    return 0;
}
