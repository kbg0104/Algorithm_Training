#include <stdio.h>
void dP(int num);
int main(void)
{
	int num1;
	scanf("%d", &num1);
	dP(num1);
}

void dP(int num)
{
	int aaaa = 1;
	for (int i = 1; i <= num;i++)
	{
		for (int a = 1; a <= num; a++)
		{
			printf("%d ", a*aaaa);
		}
		printf("\n");
		aaaa++;
	}
}