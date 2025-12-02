#include <stdio.h>

// Function to return multiple values using pointers
void calculate(int a, int b, int *sum, int *diff, int *prod) {
    *sum = a + b;
    *diff = a - b;
    *prod = a * b;
}

int main() {
    int num1 = 20, num2 = 10;
    int sum, diff, prod;
    
    calculate(num1, num2, &sum, &diff, &prod);
    
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);
    
    return 0;
}
