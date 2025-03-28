#include<stdio.h>
int main(){
    int a,temp;
    scanf("%d",&a);
    int arr[a];
    int sorted=1;
    for(int i;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a-1;i++){
        if(arr[i]>arr[i+1]){
            sorted=0;
        }
    }
    if(sorted){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }

}