/*
WAP to make addition, Subtraction and multiplication of two matrix using
2-D Array
*/

#include <stdio.h>
int main()
{

    int array1[3][3];
    int array2[3][3];
    int sum[3][3];
    int sub[3][3];
    int mul[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("entar value[%d][%d]", i, j);
            scanf("%d,", &array1[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf(" %d", array1[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("entar value[%d][%d]", i, j);
            scanf("%d", &array2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf("%d", array2[i][j]);
        }
    }

    printf("\nsummation of matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf(" %d", sum[i][j]);
        }
    }

    printf("\nsubtraction of matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sub[i][j] = array1[i][j] - array2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf(" %d", sub[i][j]);
        }
    }

    printf("\nmultiplication of matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mul[i][j] = array1[i][j] * array2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf(" %d", mul[i][j]);
        }
    }
    return 0;
}