#include<stdio.h>
int main(){
    int a,c;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d\n",&arr[i]);
    }
    scanf("%d",&c);
    for(int i=c;i>0;i--){
        printf("%d ",arr[a-i]);
    }
    for(int i=0;i<a-c;i++){
        printf("%d ",arr[i]);
    }

}