/*
Write a program you have to make a summation of first and last Digit. (E.g.,
1234 Ans: -5)
*/

#include<stdio.h>
int main(){

    int a = 1234;
    int sum = 0;
    int firstdigit;
    int lastdigit;

    lastdigit = a % 10;
    while (a >= 10)
    {
        a = a / 10 ;
    }
    firstdigit = a ;
    sum = firstdigit + lastdigit;

    printf("sum of first and last digit = %d", sum);

return 0 ;
    
}

