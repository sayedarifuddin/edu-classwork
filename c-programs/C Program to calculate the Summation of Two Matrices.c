#include <stdio.h>

main()
{
    int a[2][2],b[2][2],c[2][2];
    int i,j;

    printf("MATRIX A: \n");
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            scanf("%d",&a[i][j]);
    printf("MATRIX B: \n");
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            scanf("%d",&b[i][j]);
    for(i=0; i<2; i++)
        for(j=0; j<2; j++)
            c[i][j]=a[i][j]+b[i][j];
    printf("\nSUMMATION of both MATRICES:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            printf("%4d",c[i][j]);
        printf("\n");
    }
}
