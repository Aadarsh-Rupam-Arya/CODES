#include <conio.h>
#include<stdio.h>
                
int main()
{
    int arr[5] = {34,23,31,12,90};
    
    printf("%d\n",arr[3]);

    printf("Adress : %d\n",&arr[0]);
    printf("Adress : %d\n",&arr[1]);
    printf("Adress : %d\n",&arr[2]);
    printf("Adress : %d\n",&arr[3]);

    printf("Adress : %d\n",arr);
    printf("Adress : %d\n",arr+1);
    printf("Adress : %d\n",arr+2);
    printf("Adress : %d\n",arr+3);

    printf("Value : %d\n",*(arr));
    printf("Value : %d\n",*(arr+1));
    printf("Value : %d\n",*(arr+2));
    printf("Value : %d\n",*(arr+3));  

    return 0;
}

