#include <stdio.h>
int main() {
    int value = 42;
    int* ptr = &value;
    printf("Value: %d\n", *ptr);
    printf("Address: %p\n", (void*)ptr);
    return 0;
}