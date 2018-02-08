#include <stdio.h>

int main() {
	char str[50];

	printf("Enter a string: \n");
	gets(str);
	printf("You entered: %s\n", str);
	printf("Gets next string \n");
	gets(str);
	printf("You entered: %s\n", str);

	return 0;
}