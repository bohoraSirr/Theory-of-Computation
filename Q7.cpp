/* PDA Q1: Check if a string over {a,b} belongs to { a^n b^n | n >= 0 } */
#include <stdio.h>
#include <string.h>
#define MAX 100
int main() {
    char str[MAX], stack[MAX];
    int top = -1, accepted = 1, seenB = 0;
    printf("Name: Biwash Bohora\n");
    printf("Symbol No: 81010178\n\n");
    printf("Lab Question 7: PDA - Language a^n b^n (n >= 0)\n");
    
    printf("\nEnter a string over {a,b}: ");
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i]=='a') { if (seenB) {accepted=0;break;} stack[++top]='a'; }
        else if (str[i]=='b') { seenB=1; if (top==-1){accepted=0;break;} top--; }
    }
    if (top != -1) accepted = 0;
    
    if (accepted) printf("Result: \"%s\" IS in a^n b^n (ACCEPTED).\n", str);
    else printf("Result: \"%s\" is NOT in a^n b^n (REJECTED).\n", str);

    return 0;
}

