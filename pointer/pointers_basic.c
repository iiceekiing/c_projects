#include <stdio.h>

int main() {
    int a = 10;
    int *p;

    p = &a;  // assign address of a to p

    printf("Value of a: %d\n", a);           // 10
    printf("Address of a: %p\n", &a);        // address of a
    printf("Value of p (address it holds): %p\n", p);  // same as &a
    printf("Value pointed to by p: %d\n", *p);  // 10

    return 0;
}


// ✅ 1. What is a Pointer in C?
// A pointer is a variable that stores the memory address of another variable.



