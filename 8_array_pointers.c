#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // Array name is a pointer to first element
    
    printf("Using array indexing:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    
    printf("\nUsing pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }
    
    printf("\nAddresses:\n");
    for (int i = 0; i < 5; i++) {
        printf("Address of arr[%d] = %p\n", i, &arr[i]);
    }
    
    return 0;
}
