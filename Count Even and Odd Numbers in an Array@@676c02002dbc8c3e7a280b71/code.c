#include<stdio.h>
int main(){
    int a,i,odd=0,even=0;
    scanf("%d",&a);
    int arr[a];
    for (i=0;i<a-1;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("%d %d",even,odd);

}