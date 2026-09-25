/* Q87: Write a program to reverse a string. */
#include <stdio.h>

int main() {
    char str[200], temp;
    int length = 0, i;

    fgets(str, sizeof(str), stdin);

    while(str[length] != '\0' && str[length] != '\n')
        length++;

    for(i = 0; i < length / 2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    str[length] = '\0';

    printf("%s\n", str);

    return 0;
}
