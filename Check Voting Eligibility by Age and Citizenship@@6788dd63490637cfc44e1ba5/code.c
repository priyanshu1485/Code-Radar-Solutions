#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>18 && b==1){
        printf("Eligible");
    }
    else if(a<18&& a==0){
        printf("Not Eligible")
    }
    return 0;
}