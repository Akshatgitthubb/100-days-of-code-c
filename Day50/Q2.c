/* Q100: Print all sub-strings of a string. */
#include <stdio.h>
#include <string.h>

int main() {
	char str[300];
	int start;
	int end;

	if (fgets(str, sizeof(str), stdin) == NULL)
		return 1;

	str[strcspn(str, "\n")] = '\0';

	for (start = 0; str[start] != '\0'; start++) {
		for (end = start; str[end] != '\0'; end++)
			printf("%.*s\n", end - start + 1, str + start);
	}

	return 0;
}