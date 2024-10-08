#include<stdio.h>
int main()
{
for (int i ; i<= 10000000000 ; i++){
     
    printf("Enter a no : "    );
    scanf("%d",&i);

    if (i%7==0){
        printf("you have entered mul of 7");
        break;

    }

    printf("%d\n", i);


}            
                
                
    return 0;
}