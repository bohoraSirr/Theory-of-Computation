/* TM Q1: Decide whether a binary string is a palindrome */
#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
    char tape[MAX];
    
    printf("Name: Biwash Bohora\n");
    printf("Symbol No: 81010178\n\n");
    printf("Lab Question 9: Turing Machine - Binary Palindrome Checker\n");
    
    printf("\nEnter a binary string: ");
    scanf("%s", tape);
    int len = strlen(tape);
    int left = 0, right = len - 1, accepted = 1;
    printf("\n--- Turing Machine trace ---\n");
    while (left < right) {
        printf("Tape: %s   (comparing position %d='%c' with position %d='%c')\n",
               tape, left, tape[left], right, tape[right]);
        if (tape[left] != tape[right]) { accepted = 0; break; }
        tape[left] = 'X'; tape[right] = 'X'; left++; right--;
    }
    printf("Tape: %s   (final tape state)\n", tape);
    
    if (accepted) printf("Result: ACCEPTED. The string is a palindrome.\n");
    else printf("Result: REJECTED. The string is NOT a palindrome.\n");

    return 0;
}

