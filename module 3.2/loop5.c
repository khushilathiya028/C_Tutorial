// Sum of even numbers

#include<stdio.h>

int main(){

int count, num, sum = 0;

printf("enter the velue :\n");
scanf("%d", &num);

printf("even number from 1 to %d :\n", num);
for (count = 1; count <= count; count++)
{
      if(count % 2 == 0)
      {
        printf("%d\n", count);
        sum = sum + count ;
      }
}
printf("sum of even number from 1 to %d is %d\n", num,sum);

return 0;

}


