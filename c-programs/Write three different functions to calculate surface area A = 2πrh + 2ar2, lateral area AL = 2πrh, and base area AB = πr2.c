#include<stdio.h>
#include<math.h>

int main()
{
    float radius, height;
    float sa, L, T;

    printf("RADIUS: ");
    scanf("%f", &radius);
    printf("HEIGHT: ");
    scanf("%f", &height);

    sa = 2 * M_PI * radius * (radius + height);
    L = 2 * M_PI * radius * height;
    T = M_PI * radius * radius;

    printf("\nSURFACE Area = %.2f\n", sa);
    printf("LATERAL Area = %.2f\n", L);
    printf("BASE Area    = %.2f\n", T);

    return 0;
}
