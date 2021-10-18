#include <stdio.h>
#define ALPHA_COUNT 26
#define MAX_LENGTH 1000001

int main(void)
{
	int counts[ALPHA_COUNT] = { 0, }, i;
	int max;
	int max_index;
	int max_count = 0;
	int j = 0;
	char snt[MAX_LENGTH];
	max = counts[0];
	max_index = 0;
	scanf_s("%[^\n]s", snt, MAX_LENGTH - 1);

	for (i = 0; snt[i] != 0; i++) {
		if (snt[i] >= 'a' && snt[i] <= 'z') {
			counts[snt[i] - 'a']++;
		}
		else if (snt[i] >= 'A' && snt[i] <= 'Z') {
			counts[(snt[i] + 32) - 'a']++;
		}
	}

	for (i = 0; i < ALPHA_COUNT; i++) {
		if (max < counts[i]) {
			max = counts[i];
			max_index = i;
		}
	}

	for (j = 0; j < ALPHA_COUNT; j++) {
		if (max == counts[j]) {
			max_count += 1;
		}
	}
	if (max_count == 1) {
		printf("%c\n", 'a' + max_index - 32);
	}
	else if (max_count >= 2) {
		printf("?\n");
	}
	return 0;
}