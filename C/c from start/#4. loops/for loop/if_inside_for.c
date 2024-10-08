#include<stdio.h>
int main()
{
int a;

// do{

//     printf("enter a num: ");
//     scanf("%d", &i);
//     printf("%d\n",i);
    
//     if (i%2 != 0 ){
//         break;

//     }
    
// } while(1);

                
for (int i ; i <= 100000000 ; i++ ){

    printf("enter a no : ");
    scanf("%d", &i);

    if (i % 2 != 0){
        break;
            }

    printf("%d \n",i);
}




    return 0;
}