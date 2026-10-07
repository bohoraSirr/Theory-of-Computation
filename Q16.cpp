/* Moore Q2: Even parity checker */
#include <stdio.h>
#include <string.h>
int main() {
    char input[100];
    
    printf("Name: Biwash Bohora\n");
    printf("Symbol No: 81010178\n\n");
    printf("Lab Question 16: Moore Machine - Even Parity Checker\n");
    
    printf("\nEnter a binary string: ");
    scanf("%s", input);
    int len = strlen(input), state = 0;
    printf("\nStep  Input  State  Output\n----  -----  -----  ------\n");
    printf(" 0     -    qEven     1   (initial: zero 1's is even)\n");
    for (int i = 0; i < len; i++) {
        int bit = input[i]-'0';
        if (bit==1) state = 1 - state;
        const char *name = (state==0) ? "qEven" : "qOdd ";
        int output = (state==0) ? 1 : 0;
        printf(" %d     %c    %s     %d\n", i+1, input[i], name, output);
    }

    return 0;
}

