int serchInRotatedArray(arr,n,target){
    for(int i=0;i<n;i++){
        if(arr[i]==target){

            return i;
        }

    }
    return -1;
}