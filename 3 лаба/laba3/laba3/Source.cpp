#include <stdio.h>

int main() {
	int all, b, c, d, res;
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	res = int((all > 0)) + int((b > 0)) + int((c > 0)) + int((d > 0));
	if (res == 4)
	{
		printf("%d %d %d\n", all, b, c);
		printf("%d %d %d\n", b, c, d);
		printf("%d %d %d\n", all, c, d);
	}
	else {
		if (res == 3)
		{
			if (all < 0)
			{
				printf("%d %d %d\n", b, c, d);
			}
			if (b < 0)
			{
				printf("%d %d %d\n", all, c, d);
			}
			if (c < 0)
			{
				printf("%d %d %d\n", all, b, d);
			}
			if (d < 0)
			{
				printf("%d %d %d\n", all, b, c);
			}
		}
		else 
		{
			printf("no pairs");
		}
	}
	return 0;
}