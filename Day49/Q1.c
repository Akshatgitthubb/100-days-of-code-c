/* Q97: Print the initials of a name. */
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
	char name[300];
	int i;
	int at_word_start = 1;

	if (fgets(name, sizeof(name), stdin) == NULL)
		return 1;

	name[strcspn(name, "\n")] = '\0';

	for (i = 0; name[i] != '\0'; i++) {
		unsigned char character = (unsigned char)name[i];

		if (isspace(character)) {
			at_word_start = 1;
		} else if (at_word_start) {
			printf("%c.", toupper(character));
			at_word_start = 0;
		}
	}

	printf("\n");
	return 0;
}
