void printPrimesInRange(int a,int b){
    int prime
    if(a==b){
        printf("No prime number");
    }
    for(int i=a;i<b;i++){
        isprime=1;
        for(j=2;j<i;j++){
            if(i%j==0){
                isprime=0;
                break;
            }
        }
        if(isprime==1){
            printf("%d",i);
        }
    }

}