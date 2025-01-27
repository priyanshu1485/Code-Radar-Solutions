#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    if (c=='+'){
        printf("%d",a+b);
        break;
    }
    else if (c=='-'){
        printf("%d",a-b);
        break;
    }
    else if(c=='*'){
        printf("%d",a*b);
        break;
    }else if(c=='/'){
        if(b!=0){
            printf("%d",a/b);
            break;
        }
    }else{
        printf("error");
    }

    return 0;
}