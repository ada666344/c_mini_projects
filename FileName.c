#include <stdio.h>
int main()
{
	int i = 1;
	int n=0;
	scanf_s("%d", &n);
	if (n >= 1 && n <= 5)
	{
		int a, b;
		a = 1, b = 1;
		for (i = 1;i <= n * n;i++)
		{
			if (a == n + 1)
			{
				b = b + 1;
				a = 1;
			}
			printf("H%d+ O%d -> H%dO%d\n", a, b, a, b);
			a++;
		}
	}
	return 0;
}