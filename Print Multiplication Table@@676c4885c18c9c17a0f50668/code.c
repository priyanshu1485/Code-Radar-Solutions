#include <stdio.h>
int main() {
    int a,b;
    char c='x';
    char d='=';
    scanf("%d",&a);
    b=1;
    while(b<11){
        printf("%d %c %d %c %d",a,c,b,d,a*b);
        b++;
    }
    return 0;
}