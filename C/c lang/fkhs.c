
// //     int a;
// //     printf("Enter number: ");
// //     scanf("%d", &a);
   
// // }
// // #include <stdio.h>
// // int main()
// // {
// //     int testInteger = 5;
// //     printf("Number = %d", testInteger);
// //     return 0;
    
// // }
// #include<stdio.h>
// int main()
// {
//     int a;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     printf("Number = %d", a);
//     return 0;


// }

// #include <stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter a number: ");
//     scanf("%d",&a);
//     printf("Enter a number: ");
//     scanf("%d",&b);

//     int max = a > b ? a : b;
//     int min = a < b ? a : b;
//     printf("max:%d",max);
//     printf("\nmin:%d",min);
//     a=a+b;
//     b=a-b;
//     a=a-b;

//     printf("\na:%d",a);
//     printf("\nb:%d",b);

//     return 0;
// }


// #include<stdio.h>
// if (a % 2 != 0)
//             return 0;
//         a = a / 2;
// int main()
// {
//     if((num != 0) && ((num &(num - 1)) == 0))
//       printf("\n%d is a power of 2", num);
//     return 0;
    

// }


#include <stdio.h>

int main()
{
   int n;

  printf("Enter the num: ");
   scanf("%d", &n);

   if((n != 0) && ((n &(n- 1)) == 0))
      printf("yes");

   else
      printf("no");

    return 0;
}




