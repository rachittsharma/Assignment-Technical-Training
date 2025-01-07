#include <stdio.h>
#include <math.h>

void printPowerSet(int set[], int n) {
    int powerSetSize = (1 << n);
    
    for (int i = 0; i < powerSetSize; i++) {
        printf("{ ");
        
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                printf("%d ", set[j]);
            }
        }
        
        printf("}\n");
    }
}

int main() {
    int n;
    
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);
    
    int set[n];
    
    printf("Enter the elements of the set:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &set[i]);
    }
    
    printf("\nPower Set:\n");
    printPowerSet(set, n);
    
    return 0;
}
