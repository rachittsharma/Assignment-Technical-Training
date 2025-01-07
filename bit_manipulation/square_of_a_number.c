#include <stdio.h>

int square(int n) {
    int result = 0;
    int temp = n;

    while (temp > 0) {
        if (temp & 1) {  
            result += n;
        }
        n <<= 1; 
        temp >>= 1; 
    }

    return result;
}

int main() {
    int num;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Square of %d is: %d\n", num, square(num));

    return 0;
}
