#include <conio.h>
#include<stdio.h>

int func(int* a){
    printf("The adress is : %d\n",a);
    printf("The value is : %d\n",*a);
    *a = 56 ;
    printf("The value after the change is %d",*a);
}

int main()
{
    // here we will access the value with the adress of the value
    // here it copies the adress

    int x = 34 ;
    int k = x+10;

    printf("The value before change %d\n",x);
    printf("The operation values before change %d\n",k);
    func(&x);

    printf("\n%d",x);

    int l = x+10;
    printf("\n%d",l);


    // SO we can see that the value of the x is being changed thorugh the reference thing 
    //but in call by the value this wont happen as it will only work inside the function 
                
                
    return 0;
}