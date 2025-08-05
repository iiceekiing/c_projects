#include <stdio.h>

int main() {
    int val = 200;
    int *ptr = &val;

    printf("Value: %d\n", *ptr);
    printf("Address: %p\n", ptr);

    return 0;
}

