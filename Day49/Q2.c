/* Q98: Print initials of a name with the surname displayed in full. */
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
	char name[300];
	int i;
	int surname_start = -1;
	int surname_end = 0;
	int in_word = 0;
	int at_word_start = 1;
	int has_initial = 0;

	if (fgets(name, sizeof(name), stdin) == NULL)
		return 1;

	name[strcspn(name, "\n")] = '\0';

	for (i = 0; name[i] != '\0'; i++) {
		if (isspace((unsigned char)name[i])) {
			in_word = 0;
		} else {
			if (!in_word)
				surname_start = i;
			surname_end = i + 1;
			in_word = 1;
		}
	}

	if (surname_start == -1) {
		printf("\n");
		return 0;
	}

	name[surname_end] = '\0';

	for (i = 0; i < surname_start; i++) {
		if (isspace((unsigned char)name[i])) {
			at_word_start = 1;
		} else if (at_word_start) {
			printf("%c.", toupper((unsigned char)name[i]));
			has_initial = 1;
			at_word_start = 0;
		}
	}

	if (has_initial)
		printf(" ");
	printf("%s\n", name + surname_start);

	return 0;
}
