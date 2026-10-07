/* CFG Q1: S -> aSb | epsilon ; check membership in { a^n b^n } */
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    
    printf("Name: Biwash Bohora\n");
    printf("Symbol No: 81010178\n\n");
    printf("Lab Question 11: CFG - Language a^n b^n\n");
    
    printf("\nEnter a string over {a,b}: ");
    scanf("%s", str);
    int len = strlen(str), i = 0, countA = 0, countB = 0;
    while (i < len && str[i]=='a') { countA++; i++; }
    while (i < len && str[i]=='b') { countB++; i++; }
    int valid = (i == len) && (countA == countB);
    
    if (valid) printf("Result: \"%s\" CAN be derived from S -> aSb | epsilon (a^%db^%d).\n", str, countA, countA);
    else printf("Result: \"%s\" CANNOT be derived from this grammar.\n", str);

    return 0;
}

