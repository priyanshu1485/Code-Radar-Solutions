#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if ((c*c)==(a*a)+(b*b)){
        printf("Valid");
    }
    else{
        printf("Not Valid");
    }
    return 0;
}
