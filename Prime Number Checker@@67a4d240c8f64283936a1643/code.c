int isPrime(int num){
    int count=0;
    int t=0,p=1;
    for(int i=2;i<num;i++){
        if(num % i==0){
            count++;
        }
            if(count>=1){
        printf("%d\n",t);
    }else{
        printf("%d\n",p);
    }

    }

}