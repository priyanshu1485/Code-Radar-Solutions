#include <stdio.h>
int main() {
    int a,b;
    char o;
    scanf("%d",&a);
    scanf("%d",&b)
    scanf("%c", &o);
    
    switch (o){
    case '+':
        printf("%d + %d = %d\n",a,b,a+b);
        break;

    case '-':
        printf("%d-%d = %d\n",a,b a-b);
        break;

     case '*':
        printf("%d*%d = %d\n",a,b a*b);
        break;

    case '/':
        if (b == 0){
            printf("Error: Cannot divide by zero");
        }
        else{
            printf("%d/%d = %d\n",a,b, a/b);
        }
        break;
    default:
        printf("Invalid character!")
    }
    return 0;
}