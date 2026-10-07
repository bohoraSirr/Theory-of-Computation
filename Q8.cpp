/* PDA Q2: Check if a string over {a,b} is of the form w w^R */
#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
    char str[MAX], stack[MAX];
    int top = -1;
    
    printf("Name: Biwash Bohora\n");
    printf("Symbol No: 81010178\n\n");
    printf("Lab Question 8: PDA - Even-Length Palindrome (w w^R)\n");
    
    printf("\nEnter a string over {a,b} (even length): ");
    scanf("%s", str);
    int len = strlen(str), accepted = 1;
    if (len % 2 != 0) {
        
        printf("Result: \"%s\" has ODD length, cannot be of the form w w^R.\n", str);

        return 0;
    }
    int half = len / 2;
    for (int i = 0; i < half; i++) stack[++top] = str[i];
    for (int i = half; i < len; i++) {
        if (top == -1 || stack[top] != str[i]) { accepted = 0; break; }
        top--;
    }
    if (top != -1) accepted = 0;
    
    if (accepted) printf("Result: \"%s\" IS of the form w w^R (ACCEPTED).\n", str);
    else printf("Result: \"%s\" is NOT of the form w w^R (REJECTED).\n", str);

    return 0;
}

