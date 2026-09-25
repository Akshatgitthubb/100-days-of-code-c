/*
Q23: Write a program to calculate library fine based on late days:
First 5 days late: Rs.2/day
Next 5 days late: Rs.4/day
Next 20 days late: Rs.6/day
More than 30 days: Membership Cancelled.
*/
#include <stdio.h>

int main() {
    int days;
    float fine = 0;

    scanf("%d", &days);

    if(days < 0) {
        printf("Invalid number of days\n");
    }
    else if(days <= 5) {
        fine = days * 2;
        printf("Fine = %.2f\n", fine);
    }
    else if(days <= 10) {
        fine = 5 * 2 + (days - 5) * 4;
        printf("Fine = %.2f\n", fine);
    }
    else if(days <= 30) {
        fine = 5 * 2 + 5 * 4 + (days - 10) * 6;
        printf("Fine = %.2f\n", fine);
    }
    else {
        printf("Membership Cancelled\n");
    }

    return 0;
}
