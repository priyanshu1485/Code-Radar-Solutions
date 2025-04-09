void fibonacciSeries(int n){
    int a,b,c;
    a=0;
    b=1;
    if(n==1){
        printf("%d",a);
    }
    // if(n==2){
    //     printf("%d",b);
    // }
    printf("%d %d ",a,b);
    for(int i=3;i<=n;i++){
       c=a+b;
       printf("%d ",c);
       a=b;
       b=c; 
    }
}
