#include <stdio.h>

int main() {
    int num = 100;
    int *ptr1 = &num;      // Pointer to int
    int **ptr2 = &ptr1;    // Pointer to pointer
    
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    
    printf("\nPointer ptr1:\n");
    printf("Value of ptr1 (address of num): %p\n", ptr1);
    printf("Value at ptr1 (*ptr1): %d\n", *ptr1);
    
    printf("\nPointer to pointer ptr2:\n");
    printf("Value of ptr2 (address of ptr1): %p\n", ptr2);
    printf("Value at ptr2 (*ptr2): %p\n", *ptr2);
    printf("Value at *ptr2 (**ptr2): %d\n", **ptr2);
    
    // Modifying value using double pointer
    **ptr2 = 200;
    printf("\nAfter **ptr2 = 200:\n");
    printf("Value of num: %d\n", num);
    
    return 0;
}
