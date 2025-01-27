#include <stdio.h>
int main() {
    int a,b;
    char Operator;
    scanf("%d %d",&a,&b);
    scanf(" %c", &c);
    
    switch (Operator){
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