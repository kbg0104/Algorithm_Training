#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i, j, k;
	int *num;
	scanf("%d", &j);
	num = (int*)calloc(sizeof(int), j);
	for (i = 0; i < j; i++)
		scanf("%d", &num[i]);
	for (i = 0; i < j; i++) {
		if (num[i] >= 97 && num[i] <= 122)
			printf("%c ", num[i] - 32);
		else
			printf("%c ", num[i]);
	}

}