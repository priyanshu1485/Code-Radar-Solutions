void bubbleSort(char arr[],int n){
    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]>arr[j])){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}