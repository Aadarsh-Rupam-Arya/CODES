#include<stdio.h>
                
int main()
{

    float pie= 3.14;
    int d , h ;
    float arc, arcyl;
    printf("for circle:\n");
    printf("enter the diameter of the circle : ");
scanf("%d", &d);

int r = d / 2 ;

arc = pie*r*r;

printf("Area of circle : %f\n", arc );
    
    printf("For cyln: \n");
    printf("enter the height  of the cyl : ");
scanf("%d", &h);
arcyl= arc*h;

printf("Area of cyl : %f", arcyl );

  
    
                
                
    return 0;
}