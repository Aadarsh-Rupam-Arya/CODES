#include<stdio.h>
int main()
{

    int i;

do{

    printf("enter a num: ");
    scanf("%d", &i);
    
    if (i%2 != 0 ){
        break;
    printf("%d\n",i);

    }
    
} while(1);

                            
                
                
    return 0;
}