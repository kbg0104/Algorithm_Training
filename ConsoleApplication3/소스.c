#include <stdio.h>
int main()
{
	int YA = 20;
	int YB = 16;
	int M = 5;
	int D = 24;

	if (M <= 2) {
		M += 12;
	}

	int tmp = D + ((int)(13 * (M + 1)) / 5) + YB + ((int)(YB / 4)) + ((int)(YA / 4) - (2 * YA));
	int result = tmp % 7;
	printf("%d", result);

	

	getchar();
	getchar();
	return 0;
}