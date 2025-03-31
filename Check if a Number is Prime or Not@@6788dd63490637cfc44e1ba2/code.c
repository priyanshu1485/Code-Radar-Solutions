
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a==1){
        printf("Prime");
    }
    if(a==2){
        printf("Prime");
    }
    if(a<0){
        printf("it is not prime:");
    }
    for(int i=2;i<a;i++){
        if(a%i==0){
            printf("Not Prime");
            return 0;
        }else{
            printf("Prime");
            return 0;
        }
    }