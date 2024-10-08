// #include<stdio.h>
// #include<conio.h>
// #include<string.h>
// #include<stdlib.h>

// struct student
// {
//     int roll_no ;
//     char name[100] ;
//     int marks ;
// };

// int main()
// {
//     struct student ram = {1,"ram narayan",90} , om = {2,"om narayan",80} ;

//     struct student *ptr = &ram ;


// printf("the roll_no of student through pointer: %d\n",(*ptr).roll_no);
// printf("the name of student through pointer: %s\n",(*ptr).name);
// printf("the marks of student through pointer: %d\n",(*ptr).marks);


// printf("the roll_no of student thorough -> : %d\n",ptr->roll_no);
// printf("the name of student thorough -> : %s\n",ptr->name);
// printf("the marks of student thorough -> : %d\n",ptr->marks);

//     // printf("%d\n",ram.roll_no);
//     // printf("%s\n",ram.name);
//     // printf("%d\n",ram.marks);

   
    
    
    		 	
                
                
//     return 0;
// }


#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    char   c[10] ="Blub";
    char   cj[10] ="be";

    printf("%d",strcmp(c,cj));


    // printf("%d",c);		 	
                
                
    return 0;
}