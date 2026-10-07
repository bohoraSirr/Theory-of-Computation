/* Extra Lab 1: Valid Identifier and Keyword Checker (DFA-based)
   Step 1 (DFA): check if the string is a syntactically valid identifier
   (starts with a letter or underscore, followed by letters/digits/underscores).
   Step 2: if valid, check whether it matches one of the C keywords. */
#include <stdio.h>
#include <string.h>
 
const char *keywords[] = {
    "int","float","char","double","if","else","for","while","do",
    "switch","case","break","continue","return","void","struct",
    "typedef","const","static","sizeof"
};
#define NUM_KEYWORDS (sizeof(keywords)/sizeof(keywords[0]))
 
int isLetterOrUnderscore(char c) {
    return (c>='a'&&c<='z')||(c>='A'&&c<='Z')||c=='_';
}
int isDigit(char c) { return (c>='0'&&c<='9'); }
 
int isValidIdentifier(char str[]) {
    int state = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        char c = str[i];
        switch (state) {
            case 0: state = isLetterOrUnderscore(c) ? 1 : 2; break;
            case 1: state = (isLetterOrUnderscore(c)||isDigit(c)) ? 1 : 2; break;
            case 2: state = 2; break;
        }
    }
    return (state == 1);
}
 
int isKeyword(char str[]) {
    for (int i = 0; i < NUM_KEYWORDS; i++)
        if (strcmp(str, keywords[i]) == 0) return 1;
    return 0;
}
 
int main() {
    char str[100];
 
    
   printf("Name: Biwash Bohora\n");
    printf("Symbol No: 81010178\n\n");
    printf("Lab Question 17: DFA - Valid Identifier and Keyword Checker\n");
    
 
    printf("\nEnter a string: ");
    scanf("%s", str);
 
    
    if (!isValidIdentifier(str))
        printf("Result: \"%s\" is NOT a valid identifier.\n", str);
    else if (isKeyword(str))
        printf("Result: \"%s\" is a valid identifier, but it is a RESERVED KEYWORD.\n", str);
    else
        printf("Result: \"%s\" is a VALID user-defined identifier.\n", str);

    return 0;
}

