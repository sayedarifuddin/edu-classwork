#include<stdio.h>

int main()
{
    int num=1400;
    int guess;
    int i;

    for(i=1; i<=10; i++)

    {
        printf("GUESS: ");
        scanf("%d",&guess);

        if(guess==num)

        {
            printf("RIGHT!\n\n");
            break;
        }
        else
        {
            printf("SORRY.");

            if(guess>num)
                printf("The GUESS is HIGH.\n");

            else if(guess<num)
                printf("The GUESS is LOW.\n");
        }
    }
    return 0;
}
