/* RE Q1: RE for strings over {a,b} that END WITH "abb": (a|b)*abb */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

   printf("Name: Biwash Bohora\n");
    printf("Symbol No: 81010178\n\n"); 
    printf("Lab Question 5: Regular Expression - Strings Ending with \"abb\"\n");


    printf("\nEnter a string over {a,b}: ");
    scanf("%s", str);

    int len = strlen(str);
    int valid = 1;

    /* Check that the string contains only a and b */
    for (int i = 0; i < len; i++) {
        if (str[i] != 'a' && str[i] != 'b') {
            valid = 0;
            break;
        }
    }

    /* Check whether the string ends with "abb" */
    if (valid && len >= 3 &&
        str[len - 3] == 'a' &&
        str[len - 2] == 'b' &&
        str[len - 1] == 'b') {

        printf("\nResult: \"%s\" MATCHES (a|b)*abb -> ACCEPTED.\n", str);
    }
    else {
        printf("\nResult: \"%s\" does NOT match -> REJECTED.\n", str);
    }

    return 0;
}
