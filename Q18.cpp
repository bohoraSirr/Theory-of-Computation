/* Extra Lab 2: Prefix, Suffix, and Substring Finder
   Given a string, list all of its prefixes, suffixes, and substrings. */
#include <stdio.h>
#include <string.h>
 
void findPrefixes(char str[]) {
    int len = strlen(str);
    printf("\nPrefixes:\n");
    for (int i = 1; i <= len; i++) {
        printf("   ");
        for (int j = 0; j < i; j++) printf("%c", str[j]);
        printf("\n");
    }
}
 
void findSuffixes(char str[]) {
    int len = strlen(str);
    printf("\nSuffixes:\n");
    for (int i = 0; i < len; i++) {
        printf("   ");
        for (int j = i; j < len; j++) printf("%c", str[j]);
        printf("\n");
    }
}
 
void findSubstrings(char str[]) {
    int len = strlen(str);
    printf("\nSubstrings:\n");
    int count = 0;
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            printf("   ");
            for (int k = i; k <= j; k++) printf("%c", str[k]);
            printf("\n");
            count++;
        }
    }
    printf("   Total: %d substrings\n", count);
}
 
int main() {
    char str[100];
 
    
    printf("Name: Biwash Bohora\n");
    printf("Symbol No: 81010178\n\n");
    printf("Lab Question 18: Prefix, Suffix, and Substring Finder\n");
    
 
    printf("\nEnter a string: ");
    scanf("%s", str);
 
    printf("\nOriginal String: \"%s\"\n", str);
    
    findPrefixes(str);
    findSuffixes(str);
    findSubstrings(str);

    return 0;
}

