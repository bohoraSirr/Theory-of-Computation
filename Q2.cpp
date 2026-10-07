/* DFA Q2: Check whether a binary string represents a number divisible by 3 */
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Name: Biwash Bohora\n");
    printf("Symbol No: 81010178\n\n");
    printf("Lab Question 2: DFA - Binary String Divisible by 3.\n");
    printf("\nEnter a binary string: ");
    scanf("%s", str);
    int state = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        int bit = str[i] - '0';
        state = (2 * state + bit) % 3;
    }
    if (state == 0)
        printf("Result: \"%s\" is divisible by 3 (accepted in state R0).\n", str);
    else
        printf("Result: \"%s\" is NOT divisible by 3 (ended in state R%d).\n", str, state);

    return 0;
}

