/* Q18: Accept a percentage (0-100) and assign a grade. */
#include <stdio.h>

int main() {
    float percentage;
    scanf("%f", &percentage);

    if(percentage < 0 || percentage > 100)
        printf("Invalid percentage\n");
    else if(percentage >= 90)
        printf("Grade A\n");
    else if(percentage >= 80)
        printf("Grade B\n");
    else if(percentage >= 70)
        printf("Grade C\n");
    else if(percentage >= 60)
        printf("Grade D\n");
    else
        printf("Grade F\n");

    return 0;
}
