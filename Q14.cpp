/* Mealy Q2: 2's complement generator, input LSB first */
#include<stdio.h>
#include <string.h>
int main() {
    char input[100];
    
    printf("Name: Biwash Bohora\n");
    printf("Symbol No: 81010178\n\n");
    printf("Lab Question 14: Mealy Machine - 2's Complement Generator\n");
    
    printf("\nEnter a binary number (LSB first): ");
    scanf("%s", input);
    int len = strlen(input), state = 0;
    char output[100];
    printf("\nInput  State  Output\n-----  -----  ------\n");
    for (int i = 0; i < len; i++) {
        int bit = input[i]-'0', out, next;
        if (state==0) { if (bit==0){next=0;out=0;} else {next=1;out=1;} }
        else { next=1; out=1-bit; }
        output[i]='0'+out;
        printf("  %c    q%d -> q%d    %d\n", input[i], state, next, out);
        state = next;
    }
    output[len]='\0';
    
    printf("Input (LSB first)          : %s\n", input);
    printf("2's complement (LSB first) : %s\n", output);
    
    return 0;
}

