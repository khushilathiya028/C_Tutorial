// WAP to check if the given year is a leap year or not

#include<stdio.h>
 int mani(){

int year;

printf("enter a year :");
scanf("%d",&year);


if(year % 400 == 0 ){
    printf("%d is a leap year",year);
}

else if(year % 100 == 0 ){
    printf("%d is a not leep year",year);
}

else if(year % 4 == 0 ) {
    printf("%d is a leap year",year);
}

else{
    printf("% is a not leap year",year);
}

return 0 ;

 }