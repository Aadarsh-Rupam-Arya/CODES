#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    // transversing array 

    int arr[3][2] = {{1,2},{2,2},{3,1}}	;	 	

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j<3 ;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    
 
    
    for (int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            // printf("arr[%d][%d] = %d\n",i,j,arr[i][j]);

            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    } 

       
    return 0;
}