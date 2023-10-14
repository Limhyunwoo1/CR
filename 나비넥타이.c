#include<stdio.h>
int main()
{
    int A, i, j;
    scanf_s("%d", &A);
    for (i = 1; i < A / 2 + 1; i++) {
        for (j = 1; j <= i; j++)printf("*");
        for (j = 1; j <= A - i * 2; j++)printf(" ");
        for (j = 1; j <= i; j++)printf("*");
        printf("\n");
    }

    for (j = 1; j <= A; j++)printf("*");
    printf("\n");

    for (i = A / 2; i > 0; i--) {
        for (j = 1; j <= i; j++)printf("*");
        for (j = 1; j <= A - i * 2; j++)printf(" ");
        for (j = 1; j <= i; j++)printf("*");
        printf("\n");
    }
    return 0;
}