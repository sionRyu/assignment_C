#include <stdio.h>

int main(void)
{
	int num, n, index = 0, read_file_state, write_file_state;
	float sum = 0, score, score_1, score_2, score_3, variance, mean, var_sum = 0;
	char name[3];
	FILE* read_file, * write_file;

	read_file = fopen("text.txt", "r");
	if (read_file == NULL)
	{
		printf("read file open error!\n");
		return 1;
	}

	while (1)
	{
		n = fscanf(read_file, "%d %s %f %f %f", &num, name, &score_1, &score_2, &score_3);
		if (n == EOF)
		{
			break;
		}
		index++;
		score = score_1 + score_2 + score_3;
		sum += score;
		var_sum += score * score;
	}
	read_file_state = fclose(read_file);
	if (read_file_state != 0)
	{
		printf("read file close error!\n");
		return 1;
	}
	var_sum /= index;
	mean = sum / index;
	variance = var_sum - mean * mean;
	printf("%.2lf %.2lf\n", mean, variance);

	write_file = fopen("result.txt", "w");
	if (write_file == NULL)
	{
		printf("write file open error!\n");
		return 1;
	}

	fprintf(write_file, "%.2lf %.2lf\n", mean, variance);

	write_file_state = fclose(write_file);
	if (write_file_state != 0)
	{
		printf("write file close error!\n");
		return 1;
	}
}
