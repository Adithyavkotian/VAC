//Write a program to sort a set of names stored in an array in alphabetical order.

#include <stdio.h>
#include <string.h>

#define MAX_NAMES 5
#define MAX_LENGTH 50

int main() {
    char names[MAX_NAMES][MAX_LENGTH];
    char temp[MAX_LENGTH];

    printf("Enter %d names:\n", MAX_NAMES);
    for (int i = 0; i < MAX_NAMES; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    // Perform bubble sort to arrange names in alphabetical order
    for (int i = 0; i < MAX_NAMES - 1; i++) {
        for (int j = 0; j < MAX_NAMES - i - 1; j++) {
            int k = 0;
            while (names[j][k] != '\0' || names[j + 1][k] != '\0') {
                if (names[j][k] > names[j + 1][k]) {
                    // Swap names character by character
                    for (int l = 0; l < MAX_LENGTH; l++) {
                        temp[l] = names[j][l];
                        names[j][l] = names[j + 1][l];
                        names[j + 1][l] = temp[l];
                    }
                    break; // Break the loop if the swap is done
                } else if (names[j][k] < names[j + 1][k]) {
                    break; // Break if the order is already correct
                }
                k++;
            }
        }
    }

    printf("\nSorted names in alphabetical order:\n");
    for (int i = 0; i < MAX_NAMES; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
