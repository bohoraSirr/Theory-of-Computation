/* Extra Lab 3: Single-line and Multi-line Comment Detector
   Detects both // single-line comments and /* ... */ /*multi-line comments
   in a given line of code. */

#include <stdio.h>
#include <string.h>

int main() {
    char code[500];
    printf("Name: Biwash Bohora\n");
    printf("Symbol No: 81010178\n\n");
    printf("Lab Question 19: Single-line and Multi-line Comment Detector\n");
    printf("\nEnter a line of code: ");
    fgets(code, sizeof(code), stdin);

    /* Remove newline */
    code[strcspn(code, "\n")] = '\0';
    int found = 0;
    int i = 0;

    while (code[i] != '\0') {

        /* Check for single-line comment */
        if (code[i] == '/' && code[i + 1] == '/') {
            found = 1;
            printf("Comment found: \"");
            while (code[i] != '\0') {
                printf("%c", code[i]);
                i++;
            }
            printf("\"\n");
            break;
        }

        /* Check for multi-line/block comment */
        else if (code[i] == '/' && code[i + 1] == '*') {
            found = 1;
            int start = i;

            /* Search for closing */ 
            i += 2;

            while (code[i] != '\0' &&
                   !(code[i] == '*' && code[i + 1] == '/')) {
                i++;
            }

            if (code[i] != '\0') {
                i += 2;
            }
            printf("Comment found: \"");

            for (int j = start; j < i; j++) {
                printf("%c", code[j]);
            }
            printf("\"\n");
        }
        else {
            i++;
        }
    }
    if (!found) {
        printf("No comment found in the given line.\n");
    }

    return 0;
}
