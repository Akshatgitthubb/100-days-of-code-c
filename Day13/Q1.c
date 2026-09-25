/* Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %. */
#include <stdio.h>

int main() {
    int a, b;
    char op;

    scanf("%d %c %d", &a, &op, &b);

    switch(op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if(b != 0)
                printf("%d\n", a / b);
            else
                printf("Division by zero is not possible\n");
            break;
        case '%':
            if(b != 0)
                printf("%d\n", a % b);
            else
                printf("Division by zero is not possible\n");
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}
