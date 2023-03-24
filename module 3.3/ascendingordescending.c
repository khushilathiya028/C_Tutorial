/*
WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice 
*/

#include<stdio.h>
int main()
{
    int a[3];
    int b[3];
    int c;
    printf("entar the value of the fisrt array :");
    for(int i = 0; i < 3; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(a[i] > a[j])
            {
                c = a[i];
                a[i] = a[j];
                a[j] = c;
            }
        }
    }
    printf("the fisrt arrya number is ascending order");
    for(int i = 0; i < 3; i++)
    {
        printf("%d", &a[i]);
    }
    printf("entar the value of the second array :");
    for(int z = 0; z < 3; z++)
    {
        scanf("%d", &b[z]);
    }
    for(int z = 0; z < 3; z++)
    {
        for(int y = z + 1; y < 3; y++)
        {
            if(a[z] > a[y])
            {
                c = b[z];
                a[z] = b[y];
                a[y] = c;
            }
        }
    }
    printf("\n the second array number is ascending order");
    for(int z = 0; z < 3; z++){
        printf("%d", b[z]);
    }

    return 0;
}