#include<stdio.h>
                
int main()
{
    int a ; 
printf("enter a : ");
scanf(
    "%d" , &a
);

while (a <=  10) // condition 
{
    // if cond is satisfied print this
    printf("%d\n",a);
    a++;
}
        
    return 0;
}