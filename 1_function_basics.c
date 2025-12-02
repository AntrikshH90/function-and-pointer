#include <stdio.h>

// Function Declaration (Prototype)
int add(int a, int b);
void greet();

int main() {
    int num1, num2, sum;

    greet(); // Function Call

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sum = add(num1, num2); // Function Call with arguments and return value

    printf("Sum: %d\n", sum);

    return 0;
}

// Function Definition
void greet() {
    printf("Hello! Welcome to Function Basics.\n");
}

int add(int a, int b) {
    return a + b;
}
