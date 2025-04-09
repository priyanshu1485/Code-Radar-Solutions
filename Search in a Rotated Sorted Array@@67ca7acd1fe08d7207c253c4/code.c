int serchInRotatedArray(int arr[],int n,int target){
    for(int i=0;i<target;i++){
        if(arr[i]==target){
            return i;
        }
    }return -1;
}