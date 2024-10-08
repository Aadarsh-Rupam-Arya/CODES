#include <conio.h>
#include<stdio.h>
                
int main()
{
    int n_st = 3 ;
    int n_sb = 3 ;
    int marks[n_st][n_sb];
    for(int i = 0 ; i<n_st ; i++ ){
        for(int j = 0 ; j<n_sb ; j++ ){
            printf("enter the marks of student %d in subj %d : ",i+1 ,j+1);
            scanf("%d",&marks[i][j]);
        }
    }	

    for(int i = 0 ; i<n_st ; i++ ){
        for(int j = 0 ; j<n_sb ; j++ ){
            printf("the marks of student %d in subj %d is : %d\n",i+1,j+1,marks[i][j]);
        }
    }		 	
                
                
    return 0;
}