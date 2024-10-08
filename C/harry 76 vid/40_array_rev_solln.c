#include <conio.h>
#include<stdio.h>
#include<string.h>

void reverse(int arr[],int l){
    printf("Array before reversal : \n");
    for(int i = 0 ; i < l ; i++){
        printf("%d ",arr[i]);
    }
    printf("\nArray after reversal : \n");
    for(int i = l-1 ; i >= 0  ; i--){
        printf("%d ",arr[i]);
    }
}


int main()
{

    int array[]= {34,234,6,43,56,743};

    int legnth = sizeof(array)/sizeof(array[0]);

    reverse(array,legnth);



                
                
    return 0;
}