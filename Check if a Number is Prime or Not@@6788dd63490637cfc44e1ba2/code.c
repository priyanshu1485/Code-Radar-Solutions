#include <stdio.h>
int main() {
int a,i;
scanf("%d",&a);
if(a%2==0 || a%3==0){
    printf("Not Prime");
}
else if (a==2 ||a==3){
    printf("Prime");
}
    return 0;
}