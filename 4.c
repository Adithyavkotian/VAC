#include <stdio.h>
#include <string.h>

int main() {
    char line[1000];
    char word[] = "the";
    char modifiedLine[1000];  // To store the modified line

    // Read a line from the user using scanf
    printf("Enter a line: ");
    fgets(line, sizeof(line), stdin);

    // Remove occurrences of the word 'the'
    int i, j, k;
    int lineLength = strlen(line);
    int wordLength = strlen(word);

    for (i = 0, j = 0; i < lineLength; ) {
        // Check if the word 'the' is found
        if (strncmp(&line[i], word, wordLength) == 0) {
            i += wordLength;  // Skip the word 'the'
        } else {
            modifiedLine[j]=line[i];
            j++;
            i++;
           
            // modifiedLine[j++] = line[i++];
        }
    }

     modifiedLine[j] = '\0';  // Null-terminate the modified line

    // Print the modified line
    printf("Modified line: %s\n", modifiedLine);

    return 0;
}