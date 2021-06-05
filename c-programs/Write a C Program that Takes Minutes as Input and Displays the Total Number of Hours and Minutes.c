#include<stdio.h>

int main()
{
    int min;
    printf("Enter Minute(s): ");
    scanf("%d",&min);
    printf("%d Hour(s) and %d Minute(s)",min/60,min%60);
    return 0;
}
