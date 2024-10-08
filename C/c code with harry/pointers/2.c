// #include <conio.h>
// #include<stdio.h>
                
// int main()
// {
//     int i = 5 ;

//     int j = 10 ;


//     printf("i = %d",i);		 	
//     printf(" j = %d\n",j);
//     printf("j add = %d\n",j);


//     int *m;
//     int n = *m;
//     printf("m = %u\t",m);
//     printf("n = %u\n",m);

//     int y = j;
//     printf("y = %d",y );
                
                
//     return 0;
// }

#include <conio.h>
#include<stdio.h>
                
int main()
{
    int a = 5;
    printf("%d",a);	
   
    printf("\n%d",&a);		 	
    
    int *j = &a;
    printf("\n%d",j);
 
    
                
    return 0;
}