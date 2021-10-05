#include <stdio.h>
#include <assert.h>

// Define first two numbers to use in seqence
#define FIRST 1
#define SECOND 2
// Define a max value to not exceed
#define MAX 4000000

int main()
{
    int n0 = 0, n1 = FIRST, n2 = SECOND;
    int sum_terms = 0;
    // Initial numbers dealt with outside of loop
    if(n1 % 2 == 0){
        sum_terms += n1;
    }
    if(n2 % 2 == 0){
        sum_terms += n2;
    }
    
    // Loop through Fib numbers until greater than MAX
    while(n2 <= MAX){
        n0 = n1;
	n1 = n2;
	n2 = n0 + n1;
	if(n2 % 2 == 0){
            sum_terms += n2;
	}
    }
    printf("The sum of even-valued Fibonacci numbers (lte %d): %d\n", MAX, sum_terms);
}
