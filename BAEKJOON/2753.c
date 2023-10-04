#include <stdio.h>
int main() {
	int a;
	scanf_s("%d", &a);
	if (a < 1 && a > 4000)
	{
		printf("1보다 크거나 같고, 4000보다 작거나 같은 자연수 입력");
	}
	else if (a >= 1 && a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;
}