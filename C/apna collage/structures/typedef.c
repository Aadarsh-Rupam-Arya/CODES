#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

typedef struct computerstudent {
    int roll_no ;
    char name[100] ;
    int marks ;
} cse;

void info(cse ram){
    printf("roll no : %d\n",ram.roll_no);
    printf("name : %s\n",ram.name);
    printf("marks : %d\n",ram.marks);
}


int main()
{
    cse shyam = {2,"shyaaaam",80} ;
  
    info(shyam);

    return 0;
}