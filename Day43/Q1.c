/* Q85: Write a program to convert an uppercase string to lowercase. */
#include <stdio.h>

int main() {
    char str[200];
    int i;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }

    printf("%s", str);

    return 0;
}
