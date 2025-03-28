#include<stdio.h>
int main(){
    int a,c;
    c=-1;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    if (a==1){
        printf("%d",c);
        return 0;
    }


    int max=arr[0];
    for(int i=0;i<a;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    printf("%d",arr[a-2]);
    return 0;
    }
     for(int i=0;i<a;i++){
        if(arr[i]==max){
            printf("%d",c);
            return 0;
        }
}
}
