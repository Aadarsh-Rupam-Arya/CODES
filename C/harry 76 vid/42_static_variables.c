#include <conio.h>
#include<stdio.h>
#include<string.h>
int func(){
    static int  a = 5 ;  // this will be a static value and further process will be there so it will recorgnize the new value
    
    a++ ;
    return a ;

}               
int main()
{
    int k = func() ;
    printf("%d\n",k);
    int l = func() ;
    printf("%d\n",l);
    int m = func() ;
    printf("%d\n",m);
    int n = func() ;
    printf("%d\n",n);
    int o = func() ;
    printf("%d\n",o);
     	
    

    return 0;
}