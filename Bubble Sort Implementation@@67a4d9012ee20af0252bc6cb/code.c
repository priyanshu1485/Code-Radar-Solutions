void bubblesort(int arr[],int n){
    int temp,n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n+1;j++){
            if((arr[i]>arr[j])){
                temp=i;
                i=j;
                j=temp;
            }
        }
    }

}
void printArray(int arr[],int n){
    for(i=0;i<n;i++){
        printf("%d ",i)
    }
}