#include<stdio.h>

int main()
{
    int e;
    float m;
    printf("YOUR WEIGHT on EARTH: ");
    scanf("%d", &e);

    m = e * 1.622 / 9.81;

    printf("YOUR EFFECTIVE WEIGHT on MOON: %.2f", m);

    return(0);
}
