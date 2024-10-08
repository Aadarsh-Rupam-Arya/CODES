#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

 int vowel(char str[]){
    int count = 0;

     for(int i = 0 ; i<strlen(str); i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;

    }	
    }
    return count;
 }

int main()
{
    char str[] = "hello my name is aadarsh";

    int count=0 ;

    	 	
                
    printf("%d",vowel(str));

    return 0;

}