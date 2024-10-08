#include <conio.h>
#include<stdio.h>
                
int main()
{
int n , i , j;

    printf("enter the no of subjs : ");
    scanf("%d",&n);

    char sub[n][20];

    int marks[n];


    for( i = 0 , j = 0 ; i < n , j < n ; i++ , j++ ){
        printf("Enter the subj name : ");
        scanf("%s",&sub[i]);
        
        printf("Enter subj marks : ");
        scanf("%d",&marks[j]);
    }

    printf("Report card : \n");
    
    for (int  x = 0 ;x<n  ; x++  ){
        if (marks[x]>=35){
            printf("you have passed in the subject %s and your marks is %d\n",sub[x],marks[x]);
        }
        else{
            printf("you have failed in the subject %s and your marks is %d\n",sub[x],marks[x]);

        }
    }

   
                
                
    return 0;
}