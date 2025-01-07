#include <stdio.h>

int countBitsToFlip(int a, int b) {
    int xor_result = a ^ b;

    int count = 0;
    while (xor_result) {
        count += xor_result & 1;
        xor_result >>= 1;  
    }

    return count;
}

int main() {
    int a, b;

    printf("Enter number a: ");
    scanf("%d", &a);
    printf("Enter number b: ");
    scanf("%d", &b);
    printf("Number of bits to flip to convert %d to %d: %d\n", a, b, countBitsToFlip(a, b));

    return 0;
}
