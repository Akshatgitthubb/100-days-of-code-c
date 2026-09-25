/* Q84: Write a program to convert a lowercase string to uppercase. */
#include <stdio.h>

int main() {
    char str[200];
    int i;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }

    printf("%s", str);

    return 0;
}
