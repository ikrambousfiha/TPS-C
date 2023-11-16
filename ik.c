#include <stdio.h>

void pyramide(int n)
{
    int i, j;
    if (n > 1 && n < 9)
    {
        for (i = 1; i <= n; i++)
        {
            for (int space = 1; space <= n - i; ++space)
            {
                printf(" ");
            }
            for (j = 1; j <= i; j++)
            {
                printf("%d ", i);
            }

            printf("\n");
        }
    }
}

int main()
{
    int n;

    pyramide(n);

    return 0;
}
