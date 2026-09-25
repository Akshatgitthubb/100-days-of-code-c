/* Q88: Write a program to check whether a string is a palindrome. */
#include <stdio.h>

int main() {
    char str[200];
    int length = 0, i;
    int palindrome = 1;

    fgets(str, sizeof(str), stdin);

    while(str[length] != '\0' && str[length] != '\n')
        length++;

    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if(palindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
