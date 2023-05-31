#include <stdio.h>

int main()
{
    char operator;
    float num1, num2, result;
    printf("================ Simple calculator By Raazz Gupta ================\n\n");
    printf("Choose an operator (+ - * /)\n");
    scanf("%c", &operator);
    printf("Enter the first operands for %c\n", operator);
    scanf("%f", &num1);
    printf("Enter the second operands \n");
    scanf("%f", &num2);
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("%.2f + %.2f = %.2f", num1, num2, result);
        break;
    case '-':
        result = num1 - num2;
        printf("%.2f - %.2f = %.2f", num1, num2, result);
        break;
    case '*':
        result = num1 * num2;
        printf("%.2f * %.2f = %.2f", num1, num2, result);
        break;
    case '/':
        result = num1 / num2;
        printf("%.2f /%.2f = %.2f", num1, num2, result);
        break;

    default:
        printf("You have choose wrong operator please try again");
        break;
    }

    return 0;
}