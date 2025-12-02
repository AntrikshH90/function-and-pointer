#include <stdio.h>

int main() {
    int num = 42;
    int *ptr;  // Pointer declaration
    
    ptr = &num;  // Storing address of num in ptr
    
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of ptr (address it stores): %p\n", ptr);
    printf("Value at address stored in ptr: %d\n", *ptr);
    
    // Modifying value using pointer
    *ptr = 100;
    printf("\nAfter *ptr = 100:\n");
    printf("Value of num: %d\n", num);
    
    return 0;
}
