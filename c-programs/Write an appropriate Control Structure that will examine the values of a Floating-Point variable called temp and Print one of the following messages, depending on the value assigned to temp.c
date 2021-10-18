/*
(a) ICE, if the value of temp is less than 0.
(b) WATER, if the value of temp lies between 0and 100.
(c) STEAM, if the value of temp exceeds 100.
*/

#include<stdio.h>
int main()
{
    float t;
    printf("TEMPARATURE: ");
    scanf("%f",&t);
    if(t<0)
        printf("ICE");
    else if(t>=0 && t<=100)
        printf("WATER");
    else if(t>100)
        printf("STEAM");
}
