#include <stdio.h>
int main() {
    printf("");
    scanf("%d %d",&a,&b);
    if (a>0 && b<0) {
        printf("True");
    }
    else if (a==0 || b==0){
        printf("False");
    }
    return 0;
}