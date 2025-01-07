#include <stdio.h>
#include <limits.h>

int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;  
    }

    int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

    long long abs_dividend = labs(dividend);
    long long abs_divisor = labs(divisor);

    int quotient = 0;

    for (int i = 31; i >= 0; i--) {
        if ((abs_divisor << i) <= abs_dividend) {
            abs_dividend -= (abs_divisor << i);  
            quotient |= (1 << i);  
        }
    }

    return sign * quotient;
}

int main() {
    int dividend = 10;
    int divisor = 3;

    int result = divide(dividend, divisor);
    printf("Result of %d / %d is: %d\n", dividend, divisor, result);

    return 0;
}
