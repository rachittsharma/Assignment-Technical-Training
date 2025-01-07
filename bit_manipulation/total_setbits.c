#include <stdio.h>

int countSetBits(int n) {
    int count = 0;

    for (int i = 1; i <= n; i++) {
        int num = i;
        while (num) {
            count++;
            num &= (num - 1); 
        }
    }
    
    return count;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Total number of set bits from 1 to %d is: %d\n", n, countSetBits(n));

    return 0;
}
