#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char buf[BUFSIZ];
	int i;

	printf("Enter your number: ");

	if (fgets(buf, sizeof(BUFSIZ), stdin) != NULL)
	{
		/* code */
		i = atoi(buf);
		printf("You entered %d\n", i);
	}

	return 0;
}