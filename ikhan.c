#include <stdio.h>
int main(void)
{
    int i, S, AV, e = 0;
    scanf("%d", &i);
    while (i != -1)
    {
        if (i > 0)
        {
            S += i;
            e += 1;
        }
        scanf("%d", &i);
    }
    AV = S / e;
    printf("%d %lf", e, AV);
}