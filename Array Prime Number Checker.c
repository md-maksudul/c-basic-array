#include <stdio.h>

int main() {
    int n, i, j, array[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);


    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\n--- Results ---\n");


    for(i = 0; i < n; i++) {
        int num = array[i];
        int isprime = 1;
 if (num <= 1) {
            isprime = 0;
        } else {

            for(j = 2; j * j <= num; j++) {
                if(num % j == 0) {
                    isprime = 0;
                    break;
                }
            }
        }


        if(isprime == 1) {
            printf("%d is a prime number\n", num);
        } else {
            printf("%d is not a prime number\n", num);
        }
    }

    return 0;
}
