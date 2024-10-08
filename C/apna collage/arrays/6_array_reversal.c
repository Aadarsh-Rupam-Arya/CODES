#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int arr_rev(int arr[] , int size){
    for (int i = 0 ; i< size/2 ; i++ ){
        int f_val = arr[i];
        int s_val = arr[size-i-1];
        arr[i]= s_val;
        arr[size-i-1] = f_val;
    }   
}

int print_arr(int arr[], int size){
    for (int i = 0 ; i< size ; i++){
        printf("%d ", arr[i]);
    }
}

int main()
{
    int size = 5;
    int arr[] ={1,2,3,4,5};

    arr_rev(arr,size);
    print_arr(arr,size);

    

                
                
    return 0;
}