// wap to swap two numbers without using thrid variable.

#include<stdio.h>

int main(){

int a = 70;
int b = 80;

printf("a value is %d \n",a);
printf("b value is %d \n",b);

a = a+b;                           //70 = 70+80
b = a-b;                          //80 = 150-80
a = a-b;                         //150 = 150-70

printf("a value is %d \n",a);
printf("b value is %d \n",b);


}

