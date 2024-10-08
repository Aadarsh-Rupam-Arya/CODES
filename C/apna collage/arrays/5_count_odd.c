#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

int countodd(int arr[] , int size){
    int count = 0 ;
    for (int i = 0 ; i < size ; i++ ){
        if (arr[i] %2 != 0 ){
            count++;
        }
    }
    return count;  
}
int main()
{
    int arr[6] = {1,4,63,2,3,8}	;	 	
    int size = 6 ;

    printf("%d",countodd(arr,6));

    
                
    return 0;
}