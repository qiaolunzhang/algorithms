#include <stdio.h>

int main() {
	int num;
	int i;

	printf("How many time do you want the loop to run? \n");
	num = getchar();

	num -= '0';

	for (i = 0; i < num; i++)
		puts("Lootping");

	printf("The loop ran %d times\n", num);
	return 0;
}