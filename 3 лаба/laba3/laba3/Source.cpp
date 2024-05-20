#include <stdio.h>

int main() {
	int al, b, c, d, res; // переменные
	scanf_s("%d%d%d%d", &al, &b, &c, &d);
	res = int((al > 0)) + int((b > 0)) + int((c > 0)) + int((d > 0));
	if (res == 4)
	{
		printf("%d %d %d\n", al, b, c);
		printf("%d %d %d\n", b, c, d);
		printf("%d %d %d\n", al, c, d);
	}
	else {
		if (res == 3)
		{
			if (a < 0)
			{
				printf("%d %d %d\n", b, c, d);
			}
			if (b < 0)
			{
				printf("%d %d %d\n", al, c, d);
			}
			if (c < 0)
			{
				printf("%d %d %d\n", al, b, d);
			}
			if (d < 0)
			{
				printf("%d %d %d\n", al, b, c);
			}
		}
		else 
		{
			printf("no pairs");
		}
	}
	return 0;
}