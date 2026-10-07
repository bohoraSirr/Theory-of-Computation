/* NFA Q2: Accepts all strings over {a,b} containing "aa" OR "bb" */
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Name: Biwash Bohora\n");
    printf("Symbol No: 81010178\n\n");
    printf("Lab Question 4: NFA - Strings Containing \"aa\" or \"bb\".\n");

    printf("\nEnter a string over {a,b}: ");
    scanf("%s", str);
    int len = strlen(str);
    int active[4] = {1,0,0,0};
    for (int i = 0; i < len; i++) {
        int next[4] = {0,0,0,0};
        char c = str[i];
        if (active[0]) { next[0]=1; if (c=='a') next[1]=1; if (c=='b') next[2]=1; }
        if (active[1] && c=='a') next[3]=1;
        if (active[2] && c=='b') next[3]=1;
        if (active[3]) next[3]=1;
        for (int k=0;k<4;k++) active[k]=next[k];
    }

    if (active[3]) printf("Result: \"%s\" is ACCEPTED (contains \"aa\" or \"bb\").\n", str);
    else printf("Result: \"%s\" is REJECTED.\n", str);

    return 0;
}

