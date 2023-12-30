# include <stdio.h>

int main() {

    char operator;
    double firstNumber, secondNumber;

    printf("输入操作符 (+, -, *, /): ");
    scanf_s("%c", &operator);

    printf("输入两个数字: ");
    scanf_s("%lf %lf", &firstNumber, &secondNumber);

    switch (operator)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", firstNumber, secondNumber, firstNumber + secondNumber);
        break;

    case '-':
        printf("%.1lf - %.1lf = %.1lf", firstNumber, secondNumber, firstNumber - secondNumber);
        break;

    case '*':
        printf("%.1lf * %.1lf = %.1lf", firstNumber, secondNumber, firstNumber * secondNumber);
        break;

    case '/':
        printf("%.1lf / %.1lf = %.1lf", firstNumber, secondNumber, firstNumber / secondNumber);
        break;

        // operator doesn't match any case constant (+, -, *, /)
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}