#include <stdio.h>

int main(int argc, char const *argv[])
{
	int temp;

	printf("Input your number: ");

	while (scanf("%d", &temp) != 1)
	{
		while (getchar() != '\n');
		printf("Try again: \n");
	}

	printf("You entered %d\n", temp);
	return 0;
}