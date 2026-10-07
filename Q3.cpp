/* NFA Q1: Accepts all strings over {a,b} ending with substring "ab" */
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
   printf("Name: Biwash Bohora\n");
    printf("Symbol No: 81010178\n\n");
    printf("Lab Question 3: NFA - Strings Ending with \"ab\"\n");
    printf("\nEnter a string over {a,b}: ");
    scanf("%s", str);
    int len = strlen(str);
    int active[3] = {1, 0, 0};
    for (int i = 0; i < len; i++) {
        int next[3] = {0, 0, 0};
        char c = str[i];
        if (active[0]) { next[0] = 1; if (c == 'a') next[1] = 1; }
        if (active[1] && c == 'b') next[2] = 1;
        active[0]=next[0]; active[1]=next[1]; active[2]=next[2];
    }

    if (active[2]) printf("Result: \"%s\" is ACCEPTED (ends with \"ab\").\n", str);
    else printf("Result: \"%s\" is REJECTED.\n", str);

    return 0;
}

