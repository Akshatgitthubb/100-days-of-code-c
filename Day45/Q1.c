/* Q89: Write a program to count the number of words in a string. */
#include <stdio.h>

int main() {
    char str[300];
    int i, words = 0;
    int inWord = 0;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if(!inWord) {
                words++;
                inWord = 1;
            }
        }
        else {
            inWord = 0;
        }
    }

    printf("%d\n", words);

    return 0;
}
