/* Q81: Write a program to input a string and print it. */
#include <stdio.h>

int main() {
    char str[200];

    fgets(str, sizeof(str), stdin);

    printf("%s", str);

    return 0;
}
