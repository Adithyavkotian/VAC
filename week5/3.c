
#include<stdio.h>
#include<string.h>

int main() {
    char line[100];
    int i, count[128] = {0}; // Assuming ASCII characters

    printf("Enter a string:\n");
    gets(line);

    printf("Frequency of each character in the string:\n");

    for (i = 0; i < strlen(line); i++) {
        count[line[i]]+=1;
    }

    for (i = 0; i < 128; i++) {
        if (count[i] > 0) {
            printf("'%c': %d\n", i, count[i]);
        }
    }

    return 0;
}
