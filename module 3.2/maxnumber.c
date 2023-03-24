/*
Write a program to find out the max from given number (E.g., No: -1562
Max number is 6)
*/

#include<stdio.h>
int main(){

    int a = 1 ;
    int b = 5 ;
    int c = 6 ;
    int d = 2 ;
    int max ;

    if((a>b) && (a>c) && (a>d))
{
    max = a;
   }
   else if ((b>a) && (b>c) && (b>d))
   {
     max = b;
   }
   else if ((c>a) && (c>b) && (c>d))
   {
    max = c;
   }
   else if((d>a) && (d>b) && (d>c)){
    max = d;
   }
   printf("entar the %d", max);

   return 0 ;

}
