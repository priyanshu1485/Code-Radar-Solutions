// Your code here...
// #include<stdio.h>
// int main(){
//     int even=0;
//     int odd=0;
//     int n;
//     printf("enter the size of array:");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enetr %d elements of array:",n);
//     for(int i=0;i<n;i++){
//     scanf("%d",&arr[i]);
//     if (arr[i]%2==0){
//         even+=arr[i];
//     }
//     if(arr[i]%2!=0){
//         odd+=arr[i];
//     }
// }
// printf("%d",even - odd);
// return 0;

// }



// #include <stdio.h>
// int main(){
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d", &arr[i]);

//     }
//     int issorted=1;
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1]){
//                 issorted=0;
//             }
//         }
//     }
//     if(issorted){
//         printf("Sorted");
//     }
//     else{
//         printf("Not Sorted");
//     }
// }


//
// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     int arr[a];
//     printf("enter:");
//     for (int i=0;i<a;i++){
//         scanf("%d",&arr[i]);
//     }
//     for (int i=1;i<a;i++){
//         if(arr[i]>arr[i-1]){
//             printf("%d",arr[i]);
//             return 0;
//         }

//     }
// }


// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);
//     int arr[a];
//     for(int i=0;i<a;i++){
//         scanf("%d",&arr[i]);
//     }
//     int max=arr[0] ,min=arr[0];
//     for(int i=0;i<a;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//         if(arr[i]<min){
//             max=arr[i];
//         }
        
//     }
//     printf("%d %d",max,min);
    
// }




#include<stdio.h>
int main(){
    int a,c,m;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&c);
    m=c+1;
    for(int i=c;i>0;i--){
        printf(" %d",arr[a-i]);
    }
    for(int i=0;i<a-c;i++){
        printf(" %d",arr[i]);
}
}