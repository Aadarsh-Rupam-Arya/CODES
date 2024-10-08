#include <conio.h>
#include<stdio.h>
void func(int* ptr){
    
  
    *(ptr + 2) = 34343434;
    


}            
int main()
{
    int sum[4]= {1,2,3,4};

    printf("The value before changing in function is %d \n",sum[2]);
  
    func(sum);
    		 	
    printf("The value after changing in function is %d \n",sum[2]);

    return 0;
}