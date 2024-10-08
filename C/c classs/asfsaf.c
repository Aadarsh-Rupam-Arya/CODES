#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
    
void Password(password) 

{



system("cls");

char d[25]="Password Protected";

char ch,pass[10];

int i=0,j;





	printf("\t \n\n\n Enter Password:");

	

while(ch!=13)

{

ch=getch();



if(ch!=13 && ch!=8){

putch('*');

pass[i] = ch;

i++;

}

}

pass[i] = '\0';

if(strcmp(pass,password)==0)

{

printf("\n\n\n\t\tPassword matched!!");

printf("\n\n\tPress any key to countinue.....");

getch();



}

else

{

printf("\n\n\n\t\t\aWarning!! \n\t   Incorrect Password");

getch();

Password();

}

}





            
void main()
{
    char password[30]="pass";
    Password();		 	
                
                
 
}