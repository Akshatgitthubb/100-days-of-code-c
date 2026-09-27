/* Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy. */
#include <stdio.h>

int main() {
	int day;
	int month;
	int year;
	const char *month_names[] = {
		"Jan", "Feb", "Mar", "Apr", "May", "Jun",
		"Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
	};

	if (scanf("%d/%d/%d", &day, &month, &year) != 3 ||
		month < 1 || month > 12) {
		return 1;
	}

	printf("%02d-%s-%04d\n", day, month_names[month - 1], year);
	return 0;
}
