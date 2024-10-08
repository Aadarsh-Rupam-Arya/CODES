#include <conio.h>
#include<stdio.h>
                
int main()
{
    printf("This program is to find Percentage and CGPA : \n");
    printf("Please select one of these : \n");
    printf("1 : Percentage .\n");
    printf("2 : CGPA .\n");
    int select ;
    printf("You want to do ( 1 or 2 ) : ");
    scanf("%d",&select);
    if (select==1){
        printf("Your have selected to convert : Percentage  \n");
        int no_of_subj;
        printf("Please enter the no of subjects : ");
        scanf("%d",&no_of_subj);
        char sub[no_of_subj][30];
        int marks[no_of_subj];
        for (int i = 0 ; i < no_of_subj ; i++ ){
            printf("Enter the name of subject %d : ",i+1);
            scanf("%s",&sub[i]);
            printf("Enter the marks in %s : ",sub[i]);
            scanf("%d",&marks[i]);
        }
        int sum = 0 ;
        for (int e = 0 ; e < no_of_subj ; e++ ){
            sum = sum + marks[e]; 
        }
        float percentage =  ((float)sum/((float)no_of_subj*100))*((float)100); ;
        printf("Your percentage is : %.2f%%\n",percentage);
    }
    else if (select==2){
        printf("Your have selected to convert : Percentage to CGPA \n");
        int no_of_subj;
        printf("Please enter the no of subjects : ");
        scanf("%d",&no_of_subj);
        char sub[no_of_subj][30];
        int marks[no_of_subj];
        for (int i = 0 ; i < no_of_subj ; i++ ){
            printf("Enter the name of subject %d : ",i+1);
            scanf("%s",&sub[i]);
            printf("Enter the marks in %s : ",sub[i]);
            scanf("%d",&marks[i]);
        }
        int sum = 0 ;
        for (int e = 0 ; e < no_of_subj ; e++ ){
            sum = sum + marks[e]; 
        }
        float percentage =  ((float)sum/((float)no_of_subj*100))*((float)100); ;
        printf("Your CGPA is : %.2f ",percentage/9.5);
    }
    return 0;
}