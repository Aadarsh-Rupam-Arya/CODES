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

void info(struct student ram){
    printf("%d\n",ram.roll_no);
    printf("%s\n",ram.name);
    printf("%d\n",ram.marks);
}

int main()
{
    struct student ram = {1,"ram narayan",90} , om = {2,"om narayan",80} ;

 
    info(ram);
    info(om);

   
    
    
    		 	
                
                
    return 0;
}