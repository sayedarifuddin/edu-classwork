#include<stdio.h>

int main()
{
    int i;
    int n;
    int f = 1;

    printf("ENTER a NUMBER: \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        f = f * i;

    printf("FACTORIAL of %d = %d\n", n, f);
    return 0;
}
