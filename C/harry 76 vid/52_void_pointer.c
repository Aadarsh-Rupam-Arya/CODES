// #include<conio.h>
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
                
// int main()
// {
//     int a = 4;

//     float b= 9.3 ; 	

//     void * ptr ;    // void pointer is also the general purpose pointer; 
//     void * pint ;
//     ptr = &a ;
//     pint = &b ;

//     printf("The value of a is %d\n", *( (int*)ptr));
//     printf("The value of b is %f\n", *( (float*)pint));


    

                
//     return 0;
// }

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    		 	
    int a = 234;

    void *ptr = &a ;
    // printf("The value of a is %d\n", *ptr);  // this will show error as is dont have the datatype and wont be able to compile and give value
void * p ;
p = &a;
    printf("The value of a is %d\n", *(int*)(ptr));
    // we can do print the 
    printf("The value of a is %d\n", p );

                
    return 0;
}