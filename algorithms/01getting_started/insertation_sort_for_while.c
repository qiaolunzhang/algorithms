#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num[10];
	int max = 0;
	int i, j;
	int tmp;

	printf("Please input the number of elements: \n");
	scanf("%d", &max);
	for (int i = 0; i < max; ++i)
	{
		scanf("%d", &num[i]);
	}

	for (i = 1; i < max; ++i)
	{
		tmp = num[i];
		j = i - 1;
		while (j >= 0 && num[j] > tmp) {
			num[j+1] = num[j];
			j--;
		}
		num[j+1] = tmp;
	}

	for (i = 0; i < max; ++i)
	{
		/* code */
		printf("%d\n", num[i]);
	}

	return 0;
}