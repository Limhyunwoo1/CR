#include <stdio.h>
int main() {
	int a;
	scanf_s("%d", &a);
	if (a < 1 && a > 4000)
	{
		printf("1���� ũ�ų� ����, 4000���� �۰ų� ���� �ڿ��� �Է�");
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