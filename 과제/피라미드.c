#include<stdio.h>
int main()
{
	int A = 0;
	scanf_s("%d", &A);
    for (int i = 1; i <= A; i++) {
        for (int j = 1; j <= A - i; j++)
        {
            printf(" ");
        }
        
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }
	return 0;
}