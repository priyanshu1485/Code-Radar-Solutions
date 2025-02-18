#include <stdio.h>

int main() {
    int num, i, count = 0;
    scanf("%d", &num);
    // if (num <= 1) {
    //     printf("Not Prime", num);
    //     return 0;
    // }
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    if (count == 2) {
        printf("Prime", num);
    } else {
        printf("Not Prime", num);
    }
    return 0;
}
