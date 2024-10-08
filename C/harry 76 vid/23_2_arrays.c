#include <conio.h>
#include<stdio.h>
                
int main()
{
    int  marks[] = {45,23,56,33};             
    for(int j = 0 ; j<4 ; j++){
        printf("Yours marks in sub %d is %d \n",j+1,marks[j]);
    }
    return 0;
}