#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#define MAX_COLS 20
#define MAX_INPUT 1000

int read_column_numbers(int columns[], int max);
void rearrange(char *output, char const *input,
				int n_columns, int const columns[]);

int main(int argc, char const *argv[])
{
	int n_columns;	// 进行处理的列标号
	int columns[MAX_COLS];	// 需要处理的列数
	char input[MAX_INPUT];	// 容纳输入行的数组
	char output[MAX_INPUT]; // 容纳输出行的数组
	n_columns = read_column_numbers(columns, MAX_COLS);

	while (gets(intput) != NULL) {
		printf("Original input is: %s\n", input);
		rearrange(output, input, )
	}

	return 0;
}