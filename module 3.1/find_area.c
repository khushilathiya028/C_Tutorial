// 3.WAP to find area of circle, rectangle and triangle.

#include<stdio.h>

int mani(){

//area circle

float radius,area1;

printf("entar the radius of circle : \n");
scanf("%f" ,&radius);
area1=3.14*radius*radius;
printf("area of the circle %f",area1);



// area rectangle

float l,b,area2;

printf("entar the length and breath of rectangle : \n");
scanf("%f, %f",&l,&b);
area2=l*b;
printf("area of the rectangle %f",area2);



// area triangle

float area3,height,base;

printf("antar the height the base of triangle : \n");
scanf("%f, %f", &height, &base);
area3=0.5*height*base;
printf("area of the triangle",area3);

return 0;


}