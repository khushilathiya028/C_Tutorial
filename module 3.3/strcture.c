/*
Write a program of structure employee that provides the following
information -print and display empno, empname, address and age 
*/

#include <stdio.h>

struct employee
{
    int empno;
    int empage;
    char empname[10];
    char empadress[30];
};
int main()
{
    struct employee obj;

    printf("Enter a employee no :");
    scanf("%d", &obj.empno);
    printf("Enter a employee name :");
    scanf("%s", &obj.empname);
    printf("Enter a employee adress :");
    scanf("%s", &obj.empadress);
    printf("Enter a employee age :");
    scanf("%d", &obj.empage);

    printf("-------Employee Details-------\n");

    printf("Employee no is :%d\n", obj.empno);
    printf("Employee name is :%s\n", obj.empname);
    printf("Employee adress is :%s\n", obj.empadress);
    printf("Employee age is :%d\n", obj.empage);
}