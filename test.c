# include <stdio.h>

int main() {

    char operator;
    double firstNumber, secondNumber;

    printf("��������� (+, -, *, /): ");
    scanf_s("%c", &operator);

    printf("������������: ");
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