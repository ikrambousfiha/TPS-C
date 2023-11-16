#include <stdio.h>
int main()
{
    int a, b, c, m, n;
    scanf("%d %d %d", &a, &b, &c);
    m = a;
    if (m < b)
    {
        m = b;
    }
    if (m < c)
    {
        m = c;
    }
    printf("max is   %d\n", m);
    n = a;
    if (n > b)
    {
        n = b;
    }
    if (n > c)
    {
        n = c;
    }
    printf("min is    %d", n);
    return 0;
}