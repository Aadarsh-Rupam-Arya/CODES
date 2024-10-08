#include <conio.h>
#include<stdio.h>
#include<string.h>
                
int main()
{
    // library options or example

    // strcat()        - concatenate or combine 2 strings ;  
    //     strcat("hello","world");
    //     op - helloworld;	

    // strlen()        - show the lenght of the string ; 
    //     strlen("harry");
    //     op - 5 

    // strrev()        - reverse the string ;
    //     strrev("harry");
    //     op- yrrah

    // strcpy()        - copy one string to other ;

    // strcmp()        - used to compare two strings ;      
            

    char s1[] = "Harry" ;  
    char s2[] = "Ravi" ;  
    
//     printf("concatinated string is: ");
//     // puts(strcat(s1,s2));

//     printf("length of s1 : %d\n",strlen(s1));
//     printf("length of s2 : %d\n",strlen(s2));

//     printf("The reverse of s1 is  : %s\n",strrev(s1));
//     printf("The reverse of s2 is  : %s\n",strrev(s2));
   
//    char s3[] = "Harry" ;  
//     char s4[] = "Ravi" ;  
     
//     printf("concatinated or combined string is: ");
//     puts(strcat(s3,s4));

//     printf("Use of strcpy() func : \n");

//     strcpy(s3,strcat(s3,s4)); // here  strcpy(u,v) where  the value of v will be copied to u ;
    
//     puts(s3);



// strcmp() is used on behalf of the asscii value of 1st character of the string ;

    printf("%d",strcmp(s2,s1));  // this is returning the -ve val as s1 have 'h' and s2 have 'r' and r is coming after h in asccii 







    return 0;
}