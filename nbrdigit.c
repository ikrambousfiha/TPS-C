#include <stdio.h>
int main()
{
    int num, i = 0;
    scanf("%d", &num);
    do
    {
        i = num / 10;
    } while (num / 10 != 0);
}