#include <conio.h>
#include<stdio.h>
void wrong_swap(int a , int b);  

void swap(int *a ,int *b);
int main()
{
    int x = 5 , y = 2;
    printf("the val of x and y is %d and %d\n",x,y );
    printf("%d\n",x/y);
    // wrong_swap(x,y);
    swap(&x , &y);
    printf("the val of x and y after swap is %d and %d",x,y );

    printf("the val of x and y is %d and %d\n",x,y );
    
    printf("%d",x/y);


                
                
    return 0;
}

void wrong_swap(int a , int b ){
    int l = a ;

     a = b ;

     b = l ;

    
}

void swap(int *a ,int *b){
    int temp ;
    temp = *a ;
    *a = *b ;
    *b = temp ;


}
