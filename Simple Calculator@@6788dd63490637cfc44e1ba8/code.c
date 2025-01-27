#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d %d",&a,&b);
    scanf("%c", &c);
    
    switch (c){
        case '+':
        printf("%d",a+b);
        break;

        case '-':
        printf("%d", a-b);
        break;

        case '*':
        printf("%d", a*b);
        break;

        case '/':
        if (b == 0){
            printf("Error: Cannot divide by zero");
        }
        else{
            printf("%d", a/b);
        }
        break;
        default:
        printf("Invalid character!")
    }
        return 0;
}