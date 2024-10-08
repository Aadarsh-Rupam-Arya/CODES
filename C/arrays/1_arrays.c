#include <conio.h>
#include<stdio.h>
                
int main()
{
    int marks[5];
    
    for (int i = 0  ; i < 5 ; i++  ){
        printf("Enter the marks of subject %d : ",i+1);
        scanf("%d",&marks[i]);
        

    }
    
    
    
    for(int j= 0 ; j<5 ; j++ ){
        
        printf("%d :  \n",j+1);

        printf("%d ",marks[j]);
    }
    
    

                
                
    return 0;
}