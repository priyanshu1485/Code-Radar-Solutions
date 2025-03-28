#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    for (int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    if(a==1){
        printf("%d",arr[i])
    }
    for (int i=1;i<a-1;i++){
        if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
            printf("%d",arr[i]);
            break;
        }

    }
    if (arr[a-1]>arr[a-2]){
        printf("%d",arr[a-1]);
    }
    
}