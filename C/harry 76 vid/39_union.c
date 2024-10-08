#include<conio.h>
#include <stdio.h>
#include <string.h>

// union is responsible to store the elements
// inside them in a same memory location 
// so then less memory will be used and 
// when one will be used other wont work and is other 
// then one wont


    union student
{
    int id;
    int marks;
    char fav_char;
    char name[30];


}; // harry ,ravi , subham ;
union student harry;



int main()
{
    

    harry.id = 1;
    harry.marks = 34;
    
   
    printf("harry id and marks is %d \n", &harry.id);
    printf("harry marks %d \n", &harry.marks);
   

    return 0;

}