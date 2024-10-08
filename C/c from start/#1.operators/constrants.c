#include <stdio.h>

#define PI 3.14

int main(int argc, char const *argv[])
{
    /* code */
    int a=9;
    const float b = 7.44; // we are making it constant so that the valuw of constant is not changed

    // b=78.56; // we cannot change the constant values
    // PI = 7.33; This will give error as we have defined PI as constant
    
    printf("PI is %f", PI);
    printf("\nwe cannot change the const value i.e %f ", b);

    return 0;
}
