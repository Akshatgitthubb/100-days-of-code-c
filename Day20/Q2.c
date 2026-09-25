/* Q40: Write a program to find the 1's complement of a binary number and print it. */
#include <stdio.h>

int main() {
    char binary[100];
    int i;

    scanf("%99s", binary);

    for(i = 0; binary[i] != '\0'; i++) {
        if(binary[i] == '0')
            binary[i] = '1';
        else if(binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid binary number\n");
            return 0;
        }
    }

    printf("%s\n", binary);

    return 0;
}
