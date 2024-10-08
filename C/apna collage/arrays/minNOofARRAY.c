#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    int arr[5] = {32,23,54,23,13};

    int min =  arr[0];
    int  max = arr[0];
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i<size ; i++){
        if (min>arr[i])
        min = arr[i];
        if (max<arr[i])
        max = arr[i];
    }		

    		 	
    printf("min no : %d\n",min);
    printf("max no : %d",max);
       
    return 0;
}
