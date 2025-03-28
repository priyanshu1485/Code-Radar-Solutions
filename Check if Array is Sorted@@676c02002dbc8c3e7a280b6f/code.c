#include<stdio.h>
int main(){
    int a,temp,i,j;
    scanf("%d",&a);
    int arr[a];
    for(int i;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(i=1;i<a;i++){
          if(arr[i]<arr[i-1]){
            printf("Not Sorted");
          }
        }
        printf("Sorted");
        return 0;
    }
