/* Q94: Write a program to find the first non-repeating character in a string. */
#include <stdio.h>

int main() {
    char str[300];
    int frequency[256] = {0};
    int i;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != '\n')
            frequency[(unsigned char)str[i]]++;
    }

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if(frequency[(unsigned char)str[i]] == 1) {
            printf("%c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character\n");

    return 0;
}
