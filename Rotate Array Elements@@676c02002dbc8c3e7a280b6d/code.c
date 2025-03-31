#include<stdio.h>
int main(){
    int a,c,m;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d\n",&arr[i]);
    }
    scanf("%d\n",&c);
    // m=c+1;
    for(int i=c;i>0;i--){
        printf("%d\n",arr[a-i]);
    }
    for(int i=0;i<a-c;i++){
        printf("%d\n",arr[i]);
}
}