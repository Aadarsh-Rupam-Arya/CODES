#include<stdio.h>
void india();
void french();

int main()
{
    char a;

    printf("enter 'i' for indian\t& 'f' for french: ");
    scanf("%c",&a);

    if (a=='i'){
        india();
    }
    else if (a=='f'){
        french();

    }
    		 	
                         
    return 0;
}

void india(){
    printf("Namaste\n");
}


void french(){
    printf("Bonjour\n");
}