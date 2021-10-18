#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, N;

    printf("SIZE of ARRAY: \n");
    scanf("%d", &N);

    printf("ENTER %d ELEMENTS: \n", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("ELEMENTS in the ARRAY: ");
    for(i=0; i<N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
