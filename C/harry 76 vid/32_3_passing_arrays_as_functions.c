#include <conio.h>
#include<stdio.h>

void func(int* ptr){
    
    printf("For getting the adress : \n");
    for (int i = 0 ; i < 4 ; i++){
        printf("the adress of arr[%d] is %d\n",i,&ptr[i]);
    }
    printf("\n");
    printf("For getting the value : \n");
    for (int i = 0 ; i < 4 ; i++){
        printf("the value of arr[%d] is %d\n",i,ptr[i]);
    }
    printf("\xdb\xdb\xdb\xdb\tOR\t\xdb\xdb\xdb\xdb\t\n");
    for (int i = 0 ; i < 4 ; i++){
        printf("the value of arr[%d] is %d\n",i,*(ptr+i));
    }

}            
int main()
{
    int arr[4]= {1,2,3,4};

    func(arr);

    
    return 0;
}