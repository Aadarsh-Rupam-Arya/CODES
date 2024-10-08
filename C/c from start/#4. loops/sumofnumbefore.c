#include<stdio.h>
int main()
{
    int n ;
    printf("enter no : ");
    scanf("%d", &n);
    int sum =0;

    for (int i=1 ; i<=n ; i++)
    
    {
        if (i == n ){
            
            printf("%d = ",i);
            
        }
        else{
        printf("%d + ",i);
        sum += i ;
        }
        
    }                

    printf("%d", sum );          
    return 0;
}