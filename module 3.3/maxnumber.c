// Write a program to find out the max number from given array using function

#include<stdio.h>
int main(){

    int ara[5] ={50, 60, 70, 80, 90};
    int length = sizeof(ara[5]);
    int max = ara[5];
    for(int i = 0; i <= length; i++)
    {
        if(ara[i] > max)
        max = ara[i];
    }
    printf("this array langth number is %d", max);

    return 0;
 }
