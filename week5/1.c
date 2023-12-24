#include <stdio.h>
#include <string.h>

int main() {
    char sentence[1000], result[1000];
    int i, j = 0;

    // Get sentence from the user
    printf("Enter a sentence: ");
    gets(sentence);

    // Remove vowels from the sentence
    for (i = 0; sentence[i] != '\0'; i++) {
        if (!(sentence[i] == 'a' || sentence[i] == 'e' || sentence[i] == 'i' || sentence[i] == 'o' || sentence[i] == 'u' ||
              sentence[i] == 'A' || sentence[i] == 'E' || sentence[i] == 'I' || sentence[i] == 'O' || sentence[i] == 'U')) {
            // result[j++] = sentence[i];
            result[j]=sentence[i];
            j++;
        }
    }
    result[j] = '\0'; // Null-terminate the result string

    // Display the sentence without vowels
    printf("Result after removing vowels: %s\n", result);

    return 0;
}
