#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

#define LARGE_NUM 600//851475143

bool is_prime(int a);
bool is_factor(int b, int c);

void test(void);

int main(void)
{
    test();
    return 0;
}

bool is_prime(int a)
{
    // If a is 1 or less, stop the code, this is bad
    assert(a > 1);
    if(a == 2){
        return true;
    }
    if(a%2 == 0){
        return false;
    }
    // Only loop through odd values, as even are caught earlier
    for(int i = 3; i < a/2; i += 2){
        if(a%i == 0){
            return false;
        }
    }
    return true;
}

bool is_factor(int b, int c)
{
    return true;
}

void test(void)
{
    // Test is_prime
    int true1[7] = {2,3,5,7,11,13,29};
    for(int i = 0; i < 7; ++i){
        assert(is_prime(true1[i]));
    }
    int false1[7] = {4,6,8,9,10,12,27};
    for(int i = 0; i < 7; ++i){
        assert(!is_prime(false1[i]));
    }
}
