/* Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format. */
#include <stdio.h>

int main() {
    int total, hours, minutes, seconds;

    scanf("%d", &total);

    hours = total / 3600;
    minutes = (total % 3600) / 60;
    seconds = total % 60;

    printf("%02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
