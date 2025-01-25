#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if ((c*c)==(a*a)+(b*b)){
        printf("Valid");
    }
    else if ((b*b)==(a*a)+(c*c)){
        printf("Valid");
    }
    else if((a*a)==(b*b)+(c+c)){
        prinmtf("Valid");
    }
    else{
        printf("not Valid");
    }
    return 0;
}
