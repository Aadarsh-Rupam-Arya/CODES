#include <conio.h>
#include<stdio.h>
                
int main()
{
    int marks[5];

    for (int i = 0 ; i < 5 ; i++ ){
        printf("enter the marks in sub %d : ",i+1);
        scanf("%d",&marks[i]);

    }
    for(int j = 0 ; j<5 ; j++){
        printf("Yours marks in sub %d is %d \n",j+1,marks[j]);
    }
                
                
    return 0;
}