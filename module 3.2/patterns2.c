/*

A
B C 
D E F 
G H I J 
K L M N O 

*/

#include<stdio.h>

int main(){

char count = 'A';
    for ( char i = 'A'; i <= 'E'; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
        printf(" %C", count);
        count++;
        }
printf("\n");
    }
    
}