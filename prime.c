#include <stdio.h>
int main()
{
    int num, i, e = 1;
    scanf("%d", &num);
    for (i; i > num - 1; i++)
    {
        if (num % i == 0)
        {
            e += 1;
        }
    }
    if (e > 1)
    {
        printf("it's not a prime number");
    }
    else
    {
        printf("yes");
    }
    return 0;
}