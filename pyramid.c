#include <stdio.h>
void pyramid(int n)
{
    int i, j, k;
    k = 2 * n - 2;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < k; j++)
        {
            printf(" ");
        }
        k = k - 1;
        for (j = 1; j < i + 1; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &n);
    pyramid(n);
    return 0;
}