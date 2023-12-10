#include <stdio.h>


void main() {
    int r;
    printf("Enter the number of rows you would like to print: ");
    scanf("%d", &r);
    int ASCII = 65;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < r - i; j++) {
            printf("%c", ASCII + j);
        }

        for (int j = 0; j < 2 * i; j++) {
            printf(" ");
        }

        for (int j = r - i; j > 0; j--) {
            printf("%c", ASCII + j - 1);
        }

        printf("\n");
    }


}