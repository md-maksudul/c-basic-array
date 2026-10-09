#include <stdio.h>

int main() {
    int n, i, array[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    
    printf("Even numbers: ");
    for(i = 0; i < n; i++) {
        if(array[i] % 2 == 0) {
            printf("%d ", array[i]);
        }
    }
    printf("\n"); // Move to the next line

    // Second loop: Print all odd numbers in another row
    printf("Odd numbers:  ");
    for(i = 0; i < n; i++) {
        if(array[i] % 2 != 0) { // Using != 0 catches both positive and negative odd numbers
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    return 0;
}
