// WAP to convert years into days and days into years 

#include<stdio.h>

int main(){

int year,day ;

printf("enter the day :");
scanf("%d", &day);
year = day / 365;
printf("year is %d\n" ,year);

printf("enter the year :");
scanf("%d", &year);
day = 365 * year;
printf(" day is %d  ", day);

return 0;

}