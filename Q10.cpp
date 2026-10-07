/* TM Q2: Accept the language { 0^n 1^n | n >= 0 } */
#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
    char tape[MAX];
    
   printf("Name: Biwash Bohora\n");
    printf("Symbol No: 81010178\n\n");
    printf("Lab Question 10: Turing Machine - Language 0^n 1^n\n");
    
    printf("\nEnter a binary string (expected form 0^n1^n): ");
    scanf("%s", tape);
    int len = strlen(tape), accepted = 1;
    printf("\n--- Turing Machine trace ---\n");
    while (1) {
        int i;
        for (i = 0; i < len && tape[i] != '0'; i++);
        if (i == len) {
            int j;
            for (j = 0; j < len && tape[j] != '1'; j++);
            if (j == len) { printf("Tape: %s   (no unmarked 0s or 1s left)\n", tape); accepted = 1; }
            else { printf("Tape: %s   (leftover unmatched 1 found -> reject)\n", tape); accepted = 0; }
            break;
        }
        tape[i] = 'X';
        int k;
        for (k = i + 1; k < len && tape[k] != '1'; k++);
        if (k == len) { printf("Tape: %s   (no matching 1 for this 0 -> reject)\n", tape); accepted = 0; break; }
        tape[k] = 'Y';
        printf("Tape: %s   (matched 0 at %d with 1 at %d)\n", tape, i, k);
    }
    
    if (accepted) printf("Result: ACCEPTED. String belongs to 0^n1^n.\n");
    else printf("Result: REJECTED. String does NOT belong to 0^n1^n.\n");

    return 0;
}
