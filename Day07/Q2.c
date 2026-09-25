/* Q14: Write a program to input a character and check whether it is a vowel or consonant using if-else. */
#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z')
        ch = ch + 32;

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        printf("Vowel\n");
    else if(ch >= 'a' && ch <= 'z')
        printf("Consonant\n");
    else
        printf("Not an alphabet\n");

    return 0;
}
