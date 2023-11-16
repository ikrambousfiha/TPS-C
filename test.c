#include <stdio.h>
int main()
{
    int i = 0, e, su = 0, r = 0;
    double Av;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &e);
        if (e > 0)
        {
            su += e;
            r += 1;
        }
    }
    Av = su / r;
    printf("%d %lf", r, Av);

    return 0;
}