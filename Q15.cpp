/* Moore Q1: Detect "101" in a binary input, output on state */
#include <stdio.h>
#include <string.h>
int stateOutput(int s) { return (s==3)?1:0; }
int main() {
    char input[100];
    
    printf("Name: Biwash Bohora\n");
    printf("Symbol No: 81010178\n\n");
    printf("Lab Question 15: Moore Machine - Sequence Detector for \"101\"\n");
    
    printf("\nEnter a binary string: ");
    scanf("%s", input);
    int len = strlen(input), state = 0;
    printf("\nStep  Input  New State  Output\n----  -----  ---------  ------\n");
    printf(" 0     -       q0          %d   (initial state)\n", stateOutput(0));
    for (int i = 0; i < len; i++) {
        int bit = input[i]-'0', next;
        switch (state) {
            case 0: next=(bit==1)?1:0; break;
            case 1: next=(bit==0)?2:1; break;
            case 2: next=(bit==1)?3:0; break;
            case 3: next=(bit==0)?2:1; break;
            default: next=0;
        }
        printf(" %d     %c       q%d          %d\n", i+1, input[i], next, stateOutput(next));
        state = next;
    }
    return 0;
}

