#include <conio.h>
#include<stdio.h>
                
int main()
{


   
    // char a[][30] = {"blue","green","yellow","white"};	 	
                
    // printf("The value of a[0] is %s\n",a[0]);		 	
    // printf("The value of a[1] is %s\n",a[1]);		 	
    // printf("The value of a[2] is %s\n",a[2]);		 	
    // printf("The value of a[3] is %s\n",a[3]);		 	
                


    // char a[4]= "hot";
    // printf("The value of a[4] is %s\n",a[4]);		 	

    int n = 5 ;
    char a[n][30];

    
    for (int i= 0 ; i<n ; i++ ){
        printf("enter sub: ");
        scanf("%s",&a[i]);
        printf("you enterd : %s\n",a[i]);


    }
    for (int j= 0 ; j<n ; j++){
        printf("your subjs are : %s \n",a[j]);

    }







    // int n ;
    // printf("enter the no of words you need : ");
    // scanf("%d",&n);

        
    // char a[34][n]

   




    return 0;
}

