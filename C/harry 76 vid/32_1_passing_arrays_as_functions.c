#include <conio.h>
#include<stdio.h>
void avg(int arr[],int l ){
    
    for ( int j = 0 ; j < 4 ; j++){
        printf("The val of %d is %d\n",j ,arr[j]);
    }
    
    
    float sum = 0 ;


    for (int i = 0; i < l ; i++)
    {
        sum=sum+arr[i];
    }

    printf("Avg is %.2f",sum/l);

   
}          
int main()
{
    int a  ;

    printf("Enter the no of students : ");
    scanf("%d",&a);

    int stu[a];

    
    for ( int i = 0 ; i < a ; i++ ){
        printf("Enter the value %d : ",i+1);
        scanf("%d",&stu[i]);

    }
  
    avg(stu,a);
   

    
       		 	
                
                
    return 0;
}