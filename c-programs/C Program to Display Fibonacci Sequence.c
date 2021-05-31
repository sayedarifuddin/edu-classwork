#include <stdio.h>
int main()
{
    int i, n;
    int x = 0, y = 1, z;
    printf("N = ");
    scanf("%d", &n);
    printf("FIBONACCI NUMBERS: ");

    for (i = 1; i <= n; ++i)
    {
        printf("%d  ", x);
        z = x + y;
        x = y;
        y = z;
    }
    return 0;
}
