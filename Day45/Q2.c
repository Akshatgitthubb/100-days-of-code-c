/* Q90: Write a program to remove all spaces from a string. */
#include <stdio.h>

int main() {
    char str[300];
    int i, j = 0;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("%s", str);

    return 0;
}
