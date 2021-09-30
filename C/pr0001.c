#include <stdio.h>

int main(void)
{
    int sum_of_mult = 0;
    for(int i = 1; i < 1000; i++){
        if(i % 3 == 0 || i % 5 == 0){
            sum_of_mult += i;
            // Uncomment below to check each value
            //printf("Num: %d, total:  %d\n", i, sum_of_mult);
        }
    }

    printf("The sum of all the multiples of 3 or 5 below 1000 is: %d\n",
            sum_of_mult);

    return 0;
}
