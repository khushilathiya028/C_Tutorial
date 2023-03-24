/*WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) */

#include<stdio.h>

int mani(){

float y;
    float z;
    char operator;
   float opration;
    

    printf("enter first value :");
    scanf("%f",&y);

    printf("enter second value :");
    scanf("%f",&z);

    printf("enter a operator(+,-,*,/):");
    scanf("%c",&operator);

    if(operator=='+'){
        opration=y+z;
        printf("%f and %f summation is %f",y,z,y+z);
    }
    else if(operator=='-'){
        opration=y-z;
        printf("%f and %f subsraction is %f",y,z,y-z);
    }
    else if(operator=='*'){
        opration=y*z;
        printf("%f and %f multiplication is %f",y,z,y*z);
    }
    else if(operator=='/'){
        opration=y/z;
        printf("%f and %f division is %f",y,z,y/z);
    }
    else
    {
     printf("please enter valid operator");
     }
return 0;
}