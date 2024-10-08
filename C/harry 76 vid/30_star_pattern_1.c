#include <conio.h>
#include<stdio.h>
                
int main()
{
    int i ;
    printf("Enter 1 for traingular and 2 for rev traingular pattern : ");
    scanf("%d",&i);
    int l  ;

    switch (i)
    {
    case 1 : 
    
    printf("enter no of seq : ");
    scanf("%d",&l);

    for (int j = 1 ; j<=l ; j++ ){
       
       for (int k = 1 ; k <= j ; k++){
         printf("* ");
       }
       printf("\n");

    }
        break;

    case 2 : 	
    
    printf("enter the no of seq : ");
    scanf("%d",&l);

    for (int j = l ; j >= 1 ; j--){
    for (int k = 1 ; k <= j ; k++){
    printf("* ");
    }
    printf("\n");
    }

    break;
    }	 	
                
                
    return 0;
}

