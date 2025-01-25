#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a<b){
        printf("Profit");
    }
    else if (b>a){
        printf("Loss");
    }
    else{
        printf("No Profit no Loss");
    }
  
    
    return 0;
}