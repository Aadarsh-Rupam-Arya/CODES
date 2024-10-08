// find sum of the number before digits

#include<stdio.h>
int main()
{
   int a ;
printf("enter no: ");
scanf("%d",&a);

int sum=0;


for (int k= 1 ; k <= a; k++ ){
   sum=sum+k;   //sum+=i

}

printf("sum is %d", sum);



for ( int i = a+1 ; i>=1 ; i--) {
    printf("%d\n",i);
}

 

    return 0;                        
}