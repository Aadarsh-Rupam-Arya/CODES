#include<conio.h>
#include <stdio.h>
#include <string.h>

    struct student
{
    int id;
    int marks;
    char fav_char;
    char name[30];


}; // harry ,ravi , subham ;

struct student harry, ravi, subham;
int main()
{

    harry.id = 1;
    harry.marks = 34;
    harry.fav_char = 'p';
    ravi.id = 2;
    ravi.marks = 56;
    ravi.fav_char = 'r';
    subham.id = 3;
    subham.marks = 78;
    subham.fav_char = 'w';
    strcpy(harry.name,"Harry name happy potter");
 
    printf("harry got %d marks \n", harry.marks);
    printf("harry's name is  %s \n", harry.name);

    return 0;

}