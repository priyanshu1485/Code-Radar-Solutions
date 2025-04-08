int isPrime(int num){
    if(num<=1) return 0;
    for (int i = 2; i * i <= num; i++){
        return 1;
    }
}
    