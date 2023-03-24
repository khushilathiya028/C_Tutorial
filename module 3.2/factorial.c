// WAP to print factorial of given number

#include<stdio.h>
int main(){

int num, fact = 1;

printf("enter the number \n");
scanf("%d", &num);

while(num)
{
    fact = fact * num;
    num--;

}

printf("factorial %d ", fact);
}