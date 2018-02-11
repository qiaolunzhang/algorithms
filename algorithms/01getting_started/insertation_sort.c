#include <stdio.h>

int main(int argc, char const *argv[])
{
	int count = 0;
	int i, j;
	int tmp;
	int num[20];
	int max = 20;
	printf("Please input how many numbers: \n");
	scanf("%d", &max);

	while (count < max && scanf("%d", &num[count]) == 1)
		count++;

	for (i = 1; i < max; ++i)
	{
		/* code */
		tmp = num[i];
		for (j = i-1; j >= 0; j--) {
			if (num[j] > tmp)
			{
				num[j+1] = num[j];
			}
			else
				break;
		}
		/* 下面很关键，前面的在于如果对于j不满足num[j]>tmp的话，那么num[j]其实就不用动
		***需要变的就是num[j+1] */
		if (j >= -1)
			num[j+1] = tmp;
	}


	for (i=0; i<count; i++)
		printf("%d\n", num[i]);
	return 0;
}