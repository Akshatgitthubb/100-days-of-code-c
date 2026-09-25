/* Q91: Write a program to compare two strings without using strcmp(). */
#include <stdio.h>

int main() {
    char str1[200], str2[200];
    int i = 0;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    while(str1[i] != '\0' &&
          str2[i] != '\0' &&
          str1[i] == str2[i]) {
        i++;
    }

    if(str1[i] == str2[i])
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    return 0;
}
