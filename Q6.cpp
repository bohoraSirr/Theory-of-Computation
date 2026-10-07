/* RE Q2: RE to validate whether a binary string represents an EVEN number: (0|1)*0 */

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

   printf("Name: Biwash Bohora\n");
    printf("Symbol No: 81010178\n\n");
    printf("Lab Question 6: Regular Expression - Binary String Representing an Even Number\n");


    printf("\nEnter a binary string: ");
    scanf("%s", str);

    int len = strlen(str);
    int valid = 1;

    /* Check that the string contains only 0 and 1 */
    for (int i = 0; i < len; i++) {
        if (str[i] != '0' && str[i] != '1') {
            valid = 0;
            break;
        }
    }



    /* (0|1)*0 means the string must end with 0 */
    if (valid && len > 0 && str[len - 1] == '0') {
        printf("Result: \"%s\" MATCHES (0|1)*0 -> represents an EVEN number.\n", str);
    }
    else {
        printf("Result: \"%s\" does NOT match -> represents an ODD number.\n", str);
    }


    return 0;
}
