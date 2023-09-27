#include <stdio.h>
#include <stdlib.h>

int add(int num1, int num2) {
    return num1 + num2;
}

int sub(int num1, int num2) {
    return num1 - num2;
}

int mul(int num1, int num2) {
    return num1 * num2;
}

int d(int num1, int num2) {
        return num1 / num2;
}

int mod(int num1, int num2) {
    return num1 % num2;
}

int main() {
    int num1, num2;
    char opt;

    printf("Enter the 1st no: ");
    scanf("%d", &num1);
    printf("Enter the 2nd no: ");
    scanf("%d", &num2);
    printf("Enter the operation: ");
    scanf(" %c", &opt);

    int result;

    if (opt == '+') {
        result = add(num1, num2);
        printf("Addition is: %d\n", result);
    } else if (opt == '-') {
        result = sub(num1, num2);
        printf("Subtraction: %d\n", result);
    } else if (opt == '*') {
        result = mul(num1, num2);
        printf("Multiplication: %d\n", result);
    } else if (opt == '/') {
        result = d(num1, num2);
        printf("Division: %d\n", result);
    } else if (opt == '%') {
        result = mod(num1, num2);
        printf("Mod: %d\n", result);
    } else {
        printf("You have entered a wrong operator.\n");
    }

    return 0;
}








