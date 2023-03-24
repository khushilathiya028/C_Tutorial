// How many odd numbers are there

#include<stdio.h>
int main(){

    int odd = 0 ,i;

for (int i = 1; i <= 10; i++){
    if (i % 2 != 0){
        printf("%d is odd number\n",i);
        odd++;
    }
}
printf("%d odd number\n", odd);

return 0;
}