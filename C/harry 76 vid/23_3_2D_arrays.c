#include <conio.h>
#include <stdio.h>

int main()
{
    int marks[4][4] = {{34, 54, 23, 65},
                       {3, 4, 5, 6}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("The value of %d, %d element of the array is %d\n", i + 1, j + 1, marks[i][j]);
        }

        // for (int j = 0; j < 4; j++){
        //     printf("%d ",marks[i][j]);

        // }
        // printf("\n");
    }
    printf("Matrix representation : \n");
    for (int i = 0; i < 2; i++)
    {
        // for (int j = 0; j < 4; j++)
        // {
        //     printf("The value of %d, %d element of the array is %d\n", i + 1, j + 1, marks[i][j]);
        // }

        for (int j = 0; j < 4; j++)
        {
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}