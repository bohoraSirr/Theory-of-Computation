/* Mealy Q1: Detect "101" in a binary input stream, output on transition */
#include <stdio.h>
#include <string.h>
int main() {
    char input[100];
    
    printf("Name: Biwash Bohora\n");
    printf("Symbol No: 81010178\n\n");
    printf("Lab Question 13: Mealy Machine - Sequence Detector for \"101\"\n");
    
    printf("\nEnter a binary string: ");
    scanf("%s", input);
    int len = strlen(input), state = 0;
    printf("\nInput  State  Output\n-----  -----  ------\n");
    for (int i = 0; i < len; i++) {
        int bit = input[i]-'0', output=0, next=state;
        if (state==0) { next=(bit==1)?1:0; output=0; }
        else if (state==1) { next=(bit==0)?2:1; output=0; }
        else if (state==2) { if (bit==0){next=0;output=0;} else {next=1;output=1;} }
        printf("  %c    q%d -> q%d   %d\n", input[i], state, next, output);
        state = next;
    }

    return 0;
}

