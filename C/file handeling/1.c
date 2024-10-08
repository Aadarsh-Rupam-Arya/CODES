// #include<conio.h>
// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
                
// int main()
// {
//     FILE *fp;
//     // fp = fopen("test.txt","w");

//     // char ch ;


//     // fprintf(fp, "Hello you are the student in lpu : ");

//      fp = fopen("test.txt","w");

//     if (fp == NULL){
//         printf("The file cant be open : ");
//     }
//     else{
//         printf("achaaa : ");
        
//     }
    
//     // fseek(fp ,-1 , SEEK_SET);

//     // ch = getc(fp);
//     // printf("%c",ch);

//     fclose(fp);


                
                
//     return 0;
// }

#include <stddef.h>
#include <stdio.h>

int main () {
   FILE *fp;

   fp = fopen("text.txt", "r");
   if( fp != NULL ) {
      printf("Opend file file.txt successfully\n");
      fclose(fp);
   }

   fp = fopen("nofile.txt", "r");
   if( fp == NULL ) {
      printf("Could not open file nofile.txt\n");
   }
   
   return(0);
}