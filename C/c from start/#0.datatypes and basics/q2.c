// find the radiuss of circle


#include<stdio.h>
int main()
{
    float r ;
    float area, pie=3.14;
    
 
    
    printf("Enter the radius : ");
    scanf("%f",&r);

    area = pie*r*r;
    
    printf("area: of circle: %f",area);

  
    return 0;

}