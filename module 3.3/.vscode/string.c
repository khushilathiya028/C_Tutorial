// WAP Find out length of string without using inbuilt function

#include<stdio.h>
int main()
{

    char name[]="khushi lathiya";
    int length=0;

    for(int i = 0; name[i] !=0; i++)
    {
        length++;

    }
    printf("this string length is %d", length);

return 0;
}

