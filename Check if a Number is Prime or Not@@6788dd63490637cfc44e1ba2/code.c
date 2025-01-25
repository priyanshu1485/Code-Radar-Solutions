#include <stdio.h>
int main() {
int a;
scanf("%d",&a);
if(a%1==0 && a%a==0){
    printf("Prime");
}
else if(a<=0 ||a==2 ) {
    printf("Not Prime");
}
    return 0;
}