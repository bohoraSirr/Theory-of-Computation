/* DFA Q1: Design a DFA over {a,b} that accepts all strings starting
   with 'a' and ending with 'b'. */
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("\n");
    printf("Name: Biwash Bohora\n");
    printf("Symbol No: 81010178\n\n");
    printf("Lab Question 1: DFA - Strings Starting with 'a' and Ending with 'b'.\n");
    printf("\nEnter a string over {a,b}: ");
    scanf("%s", str);
    int len = strlen(str);
    int state = 0;
    for (int i = 0; i < len; i++) {
        char c = str[i];
        switch (state) {
            case 0: state = (c == 'a') ? 1 : 3; break;
            case 1: state = (c == 'a') ? 1 : 2; break;
            case 2: state = (c == 'a') ? 1 : 2; break;
            case 3: state = 3; break;
        }
    }
    if (state == 2)
        printf("Result: \"%s\" is ACCEPTED (starts with 'a', ends with 'b').\n", str);
    else
        printf("Result: \"%s\" is REJECTED.\n", str);
    return 0;
}
