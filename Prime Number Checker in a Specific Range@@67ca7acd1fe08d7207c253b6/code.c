void printPrimesInRange(int a,int b){
    int isprime;
   
    for(int i=a;i<b;i++){
        isprime=1;
        for(int j=2;j<i;j++){
            if(i%j==0){
                isprime=0;
                break;
            }
        }
        if(isprime==1){
            printf("%d ",i);
        }
    }
     if(a==b){
        printf("No prime numbers");
    }
    
   

}