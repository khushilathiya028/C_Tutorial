// How many Even numbers are there 

#include<stdio.h>
int main(){

    int even = 0 ,i;

for (int i = 1; i <= 10; i++){
     if (i % 2 == 0){
        printf("%d is even number\n", i);
        even++;
    }
}
    printf("%d even number\n", even);
    
    return 0;
}