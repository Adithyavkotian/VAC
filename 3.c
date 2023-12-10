#include <stdio.h>
int isPrime(int num) {
    if (num < 2) {
        return 0; // Not a prime number
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main() {
    int start, end;

    // Prompt the user to enter the range
    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);

    // Display pyramid of prime numbers
    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            for (int j = start; j <= num; j++) {
                if (isPrime(j)) {
                    printf("%d ", j);
                }
            }
            printf("\n");
        }
    }

    return 0;
}