int bubblesort(int arr[],int n){
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
int printArray(int arr[],n){
    for(i=0;i<n;i++){
        printf("%d ",i)
    }
}