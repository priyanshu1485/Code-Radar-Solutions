#include <stdio.h>
int main() {
    int a ;
    int b,c,d;
    b=28;
    c=31;
    d=30;
    scanf("%d",&a);
    switch(a){
        case 1: case 3: case 5: case 7: case 9: case 11:
        printf("%d",c);
        break;

        case 4: case 6: case 8: case 10; case 12:
        printf("%d",d);
        break;

        case 2:
        printf("%d",b);
        break;

        default:
        printf("Invalid month");
        break;
    }
    return 0;
}