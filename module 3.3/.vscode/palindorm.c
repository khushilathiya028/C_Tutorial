// WAP to reverse a string and check that the string is palindrome or not 

#include<stdio.h>
int main()
{

int a,b,num,sum = 0;

printf("enter the value:");
scanf("%d", &num);

a=num;

while (num>0)
{
    b = num % 10;
    sum = (sum*10)+b;
    num = num/10;
}
if(a==sum){
    printf("this number is palidrome number");
}
else{
    printf("this number is not palidrome number");
}

return 0;
}