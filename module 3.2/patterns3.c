/*

    *
   * * 
  * * * 
 * * * * 
* * * * *

*/

#include<stdio.h>

int main(){

    for ( int i = 1; i <= 5; i++)
    {
        for (int k = 0; k <= (10 - i); k++)
        {
            printf("  ");
        }
        
        for (int j = 1; j <= i; j++)
        {
        printf("   *");
        }
printf("\n");
    }
    
}


