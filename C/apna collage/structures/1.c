#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
    int roll_no ;
    char name[100] ;
    int marks ;
};

int main()
{
    struct student ram = {1,"ram narayan",90} , om = {2,"om narayan",80} ;

    // ram.roll_no = 1 ;
    // strcpy(ram.name, "Ram narayan");
    // ram.marks = 90 ;
    
    // om.roll_no = 2 ;
    // strcpy(om.name, "om narayan");
    // om.marks = 80 ;

    printf("%d\n",ram.roll_no);
    printf("%s\n",ram.name);
    printf("%d\n",ram.marks);

    printf("%d\n",om.roll_no);
    printf("%s\n",om.name);
    printf("%d\n",om.marks);
    
    
    		 	
                
                
    return 0;
}