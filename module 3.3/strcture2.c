/*
Write a program of structure for five employee that provides the following
information -print and display empno, empname, address and age 
*/

#include <stdio.h>
struct employee
{
    int empno;
    char empname[10];
    char empadress[30];
    int empage;
};
int main()
{
    struct employee obj;
    for (int i = 1; i <= 5; i++)
    {
        printf("\n----Enter a (%d) employee details---\n", i);
        printf("Enter emp no[%d] :", i);
        scanf("%d", &obj.empno);
        printf("Enter emp name[%d] :", i);
        scanf("%s", &obj.empname);
        printf("Enter emp adress[%d] :", i);
        scanf("%s", &obj.empadress);
        printf("Enter emp age[%d] :", i);
        scanf("%d", &obj.empage);
    }
    for (int i = 1; i <= 5; i++)
    {
        printf("\n---- (%d)   Employee Details----\n", i);
        printf("[%d] Employee no is :%d\n", i, obj.empno);
        printf("[%d] Employee name is :%s\n", i, obj.empname);
        printf("[%d] Employee adress is :%s\n", i, obj.empadress);
        printf("[%d] Employee age is :%d\n", i, obj.empage);
    }
    return 0;
}