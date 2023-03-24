/* 
WAP to print number in reverse order e.g.: number = 64728 ---> reverse =
82746
*/

#include<stdio.h>
int main(){

    int a = 64728 ;
    int b ;
    int reverse = 0 ;

    while (a != 0)
    {
    b = a % 10;
    reverse = reverse * 10 + b;
    a /= 10;

    }
    printf("reversed number %d", reverse);
    return 0;
}