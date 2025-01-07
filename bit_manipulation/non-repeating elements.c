#include <stdio.h>

void findTwoNonRepeatingElements(int arr[], int n) {
    int xorResult = 0;
    
    for (int i = 0; i < n; i++) {
        xorResult ^= arr[i];
    }

    int rightmostSetBit = xorResult & -xorResult;

    int num1 = 0, num2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] & rightmostSetBit) {
            num1 ^= arr[i]; 
        } else {
            num2 ^= arr[i]; 
        }
    }

    printf("The two non-repeating elements are: %d and %d\n", num1, num2);
}

int main() {
    int arr[] = {4, 3, 2, 4, 7, 3, 8, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    findTwoNonRepeatingElements(arr, n);

    return 0;
}
