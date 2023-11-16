#include <stdio.h>
int prime(int x)
{
    int i;
    if (x <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return 1;
        }
        return 0;
    }
}
int sumofPrime(int m, int n)
{
    int e = 0;
    for (int i = m; i <= n; i++)
    {
        if (prime(i) != 0)
        {
            e += i;
        }
    }
    return e;
}