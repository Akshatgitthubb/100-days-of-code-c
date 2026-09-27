/* Q95: Check if one string is a rotation of another. */
#include <stdio.h>
#include <string.h>

int main() {
	char first[300];
	char second[300];
	char doubled[600];

	if (fgets(first, sizeof(first), stdin) == NULL ||
		fgets(second, sizeof(second), stdin) == NULL) {
		return 1;
	}

	first[strcspn(first, "\n")] = '\0';
	second[strcspn(second, "\n")] = '\0';

	if (strlen(first) != strlen(second)) {
		printf("Not a rotation\n");
		return 0;
	}

	strcpy(doubled, first);
	strcat(doubled, first);

	if (strstr(doubled, second) != NULL)
		printf("Rotation\n");
	else
		printf("Not a rotation\n");

	return 0;
}
