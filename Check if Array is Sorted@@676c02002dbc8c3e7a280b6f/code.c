#include<stdio.h>
int main(){
    int a,temp;
    scanf("%d",&a);
    int arr[a];
    int sorted=1;
    for(int i;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a;i++){
        for(int j=i+1;j<a;j++){
            if(arr[i]<=arr[j]){
                sorted=0;
                
            }
        }
    }
    if(sorted){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }

}