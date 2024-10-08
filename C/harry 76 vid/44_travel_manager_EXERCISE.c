#include <conio.h>
#include<stdio.h>
#include<string.h>

void driv(int n){
struct drivers
{
    char name[40];
    int licence_no;
    int age;
    int kms;

};
}
               
int main()
{


















    int no_of_drivers;
    printf("Enter the no of drivers : ");
    scanf("%d",&no_of_drivers);
    printf("Please fill the details : \n");
    char name[no_of_drivers];
    int licence_no[no_of_drivers];
    int age[no_of_drivers];
    int kms[no_of_drivers];

    for (int i = 0 ; i < no_of_drivers ; i++ ){
        printf("Enter the Name of Driver %d: ",i+1);
        scanf("%s",&name[i]);
        printf("Enter the licence_no of Driver %d: ",i+1);
        scanf("%s",&licence_no[i]);
        printf("Enter the age of Driver %d: ",i+1);
        scanf("%s",&age[i]);
        printf("Enter the kms driver %d: ",i+1);
        scanf("%s",&kms[i]);
    }		 	

             
                
    return 0;
}