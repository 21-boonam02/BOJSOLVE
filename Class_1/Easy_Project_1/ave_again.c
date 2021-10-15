#include <stdio.h>

int main2(void)
{
	int sub_count;

	scanf("%d", &sub_count);
	float total_score = 0;
	int score;
	int max = 0;
	for (int i = 1; i < sub_count + 1; i++) {
		scanf("%d", &score);
		total_score += score;

		if (max < score) {
			max = score;
		}
	}

	float new_avg;
	new_avg = ((total_score / max) * 100) / sub_count;
	printf("%f", new_avg);
}
