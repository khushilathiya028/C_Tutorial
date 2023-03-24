// Sum of odd numbers WAP to print table up to given numbers

#include<stdio.h>
int main(){

    int i, number, sum = 0;

    printf("enter the valur :");
    scanf("%d", &number);

    printf("odd number %d", number);
    for(int i = 1; i <= number; i++)
    {
        sum = sum + i;
        printf("%d", i);
    }
    printf("the sum of odd number %d", number,sum);

    return 0;
    
    }