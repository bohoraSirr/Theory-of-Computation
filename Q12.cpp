/* CFG Q2: S -> aSa | bSb | a | b | epsilon ; palindrome check */
#include <stdio.h>
#include <string.h>
int derive(char *s, int left, int right) {
    if (left > right) return 1;
    if (left == right) return 1;
    if (s[left] == s[right]) return derive(s, left+1, right-1);
    return 0;
}
int main() {
    char str[100];
    
    printf("Name: Biwash Bohora\n");
    printf("Symbol No: 81010178\n\n");
    printf("Lab Question 12: CFG - Palindrome over {a,b}\n");
    
    printf("\nEnter a string over {a,b}: ");
    scanf("%s", str);
    int len = strlen(str);
    int result = derive(str, 0, len - 1);
    
    if (result) printf("Result: \"%s\" IS derivable from the palindrome grammar.\n", str);
    else printf("Result: \"%s\" is NOT derivable (not a palindrome).\n", str);

    return 0;
}

