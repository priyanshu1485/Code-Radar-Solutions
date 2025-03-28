#include<stdio.h>
int main(){
    int a,temp,i,j;
    scanf("%d",&a);
    int arr[a];
    for(int i;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++){
        for(j=i+1;j<a;j++){
            if(arr[i]<=arr[j]&&arr[i]){
                printf("Sorted");
                return 0;
                
            }else{
                printf("Not Sorted");
                return 0;

            }
        }
    
    }
    

}