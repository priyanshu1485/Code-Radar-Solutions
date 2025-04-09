printPrimesInRange(int a,int b){

for(i = a; i <= b; i++) {
        isPrime = 1; 
        
        for(j = 2; j < i; j++) {
            if(i % j == 0) {
                isPrime = 0; 
                break;
            }
        }
        
        if(isPrime == 1) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}