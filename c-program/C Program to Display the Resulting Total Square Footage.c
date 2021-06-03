#include <stdio.h>

int main()
{
    float length, width, area;

    printf("LENGTH(ft.): ");
    scanf("%f", &length);
    printf("WIDTH(ft.): ");
    scanf("%f", &width);

    area = length * width;

    printf("SQUARE FOOTAGE = %.2f sq. ft. ", area);

    return 0;
}
