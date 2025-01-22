#include <stdio.h>

int main() {
    int a;
    printf("");
    scanf("%d %d",&a);
    if (a>!0 ){
        printf("False");
    }
    else if (a<0){
        printf("True");
    }
    else{
        printf("zero");
    }
    return 0;
}