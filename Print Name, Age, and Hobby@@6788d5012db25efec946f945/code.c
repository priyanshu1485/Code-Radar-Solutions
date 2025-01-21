#include <stdio.h>
int main() {
    int a;
    char s[20];
    char p[20];
    printf("");
    scanf("%S %d %s",&s,&a,&p);
    printf("name: %s\n",s);
    printf("age: %d\n",a);
    printf("hobby: %s\n",p);

    return 0;
}