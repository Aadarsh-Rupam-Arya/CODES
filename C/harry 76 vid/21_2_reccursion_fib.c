

#include <conio.h>
#include<stdio.h>
int fib(int i);             
int main()
{
    int l  ;
    printf("Enter the no : ");
    scanf("%d",&l);
	 	
       for (int k = 0 ; k< l ; k++ ){
       printf("%d ",fib(k));         
       }
              
    return 0;
}

int fib(int i){
   
        if (i==0 ){
            return 0 ;
        }
        else if(i==1){
            return 1;
        }
        else{
        return fib(i-1)+fib(i-2);
    }

    return 0 ;

}



// fib through loop 

// #include <conio.h>
// #include<stdio.h>
                
// int main()
// {
//     int t1 = 0 , t2 = 1 , third , n  , i ;

//     printf("enter the no of seq : ");
//     scanf("%d",&n);


//     printf("%d %d ",t1,t2) ;

//     for (i = 2 ; i<=n ; i++){
//         third= t1+t2;
//         printf("%d ",third);
//         t1=t2;
//         t2=third;
//     }		 	
                
                
//     return 0;
// }