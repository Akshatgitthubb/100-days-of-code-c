/* Q83: Write a program to count vowels and consonants in a string. */
#include <stdio.h>

int main() {
    char str[200];
    int i, vowels = 0, consonants = 0;
    char ch;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        ch = str[i];

        if(ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if(ch >= 'a' && ch <= 'z') {
            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}
