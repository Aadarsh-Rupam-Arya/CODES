#include <conio.h>
#include <stdio.h>

int main() {
  
        char ch ,f, s ,a ,m ;

        printf("enter a no : ");
        
        ch = getchar();
        printf("you enter : ");
        putchar(ch);
 	

        printf("\nenter, this wont display what you will enter : ")   ;   
        f = getch();        // for enter but not display this wont display
        printf("\nyou entered : ");
        putchar(f);

        printf("\nenter, this will  display what you will enter : ") ;     
        s = getche();        // for enter and display 
        printf("\nyou entered : ");
        putchar(s);


        if(s = 5 ){
            printf("\n%d",s*4);
        }

        

    return 0;
}
