

#include<stdio.h>

int main()

{
    int a = 8;
    float b= 5.3339873843;

    printf("Hello world\n");
    printf("The value of a is %d and the value of b is %f\n",a,b);
    printf("with only 3 decimal points, b is %.3f\n",b);
    printf("with only 3 decimal points, b is %10.3f\n",b); //10.3 means 10 some space 
    printf("%-6.3f this",b); // this will put space accordingly in fron and back

    return 0;

}


// format specifiers are :- 

// %c = characters
// %d = integer 
// %f = float
// %l = long integer 
// %lf = double
// %LF = long double



