#include <stdio.h>

int main() {
    int positive = 0, negative = 0, zero = 0;
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    while (num != 0) {
        if (num > 0) positive++;
        else if (num < 0) negative++;
        else zero++;

        printf("Enter another number: ");
        scanf("%f", &num);
    }

    printf("Positive: %d\nNegative: %d\nZeroes: %d\n", positive, negative, zero);

    return 0;
}