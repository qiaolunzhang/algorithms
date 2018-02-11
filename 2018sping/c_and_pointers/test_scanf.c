#include "stdio.h"

int main(int argc, char const *argv[])
{
	int i, j;

	printf("Input 2 numbers: ");

	if (scanf("%d %d", &i, &j) == 2)
	{
		printf("You entered %d and %d\n", i, j);
	}
	else
		printf("You failed to entered 2 numbers\n");
	return 0;
}