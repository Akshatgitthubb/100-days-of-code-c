/* Q96: Reverse each word in a sentence without changing the word order. */
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
	char sentence[300];
	int index = 0;

	if (fgets(sentence, sizeof(sentence), stdin) == NULL)
		return 1;

	sentence[strcspn(sentence, "\n")] = '\0';

	while (sentence[index] != '\0') {
		int start;
		int end;

		if (isspace((unsigned char)sentence[index])) {
			index++;
			continue;
		}

		start = index;
		while (sentence[index] != '\0' &&
			   !isspace((unsigned char)sentence[index]))
			index++;
		end = index - 1;

		while (start < end) {
			char temp = sentence[start];
			sentence[start] = sentence[end];
			sentence[end] = temp;
			start++;
			end--;
		}
	}

	printf("%s\n", sentence);

	return 0;
}