#include <stdio.h>

int main() {
    int nums[5] = {10, 20, 30, 40, 50};
    int *ptr = nums;

    printf("Array values using pointer:\n");

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}

