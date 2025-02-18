#include <stdio.h>

int main() {
    int num, i, count = 0;
    
    scanf("%d", &num);
    
    // Prime numbers are greater than 1
    if (num <= 1) {
        printf("Not Prime", num);
        return 0;
    }

    // Check divisibility and count the divisors
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }

    // If count is 2, the number is prime (it only has 1 and itself as divisors)
    if (count == 2) {
        printf("Prime", num);
    } else {
        printf("Not Prime", num);
    }

    return 0;
}
