#include <stdio.h>

int main() {
<<<<<<< HEAD
<<<<<<< HEAD
	int al, b, c, d, res; // переменные
	scanf_s("%d%d%d%d", &al, &b, &c, &d);
	res = int((al > 0)) + int((b > 0)) + int((c > 0)) + int((d > 0));
=======
	int a, b, c, d, res;
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	res = int((a > 0)) + int((b > 0)) + int((c > 0)) + int((d > 0));
	if (a > 0) {
		  printf("+");//Проверка на неотрицательность
	}
>>>>>>> aabdb86a77d48f55c0af1c49b53c96610db53e3a
	if (res == 4)
	{
		printf("%d %d %d\n", al, b, c);
		printf("%d %d %d\n", b, c, d);
		printf("%d %d %d\n", al, c, d);
=======
	int all, b, c, d, res;
	scanf_s("%d%d%d%d", &all, &b, &c, &d);//Сканируем переменные
	res = int((all > 0)) + int((b > 0)) + int((c > 0)) + int((d > 0));
	if (res == 4)
	{
		printf("%d %d %d\n", all, b, c);
		printf("%d %d %d\n", b, c, d);
		printf("%d %d %d\n", all, c, d);
>>>>>>> b80dd426ed6913552b7f67b00d904e5c976bf67f
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
<<<<<<< HEAD
				printf("%d %d %d\n", al, c, d);
			}
			if (c < 0)
			{
				printf("%d %d %d\n", al, b, d);
			}
			if (d < 0)
			{
				printf("%d %d %d\n", al, b, c);
=======
				printf("%d %d %d\n", all, c, d);
			}
			if (c < 0)
			{
				printf("%d %d %d\n", all, b, d);
			}
			if (d < 0)
			{
				printf("%d %d %d\n", all, b, c);
>>>>>>> b80dd426ed6913552b7f67b00d904e5c976bf67f
			}
		}
		else 
		{
			printf("no pairs");
		}
	}
	return 0;
}